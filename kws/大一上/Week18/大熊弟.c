#include <stdio.h>
#include <stdlib.h>
int I,J;
char c;
char map[15][15]= {};
void readMap(const size_t map_size) {
	for(int i=0; i<map_size; i++) {
		for(int j=0; j<map_size; j++) {
			map[i][j]=getchar();
			if(map[i][j]=='A') {
				I=i;
				J=j;
			}
		}
		getchar();
	}
}
void printMap(const size_t map_size) {
	for(int i=0; i<map_size; i++) {
		for(int j=0; j<map_size; j++) {
			printf("%c",map[i][j]);
		}
		printf("\n");
	}
}
void move(size_t map_size, int *is_alive, int *is_stop) {
	if(*is_alive==0) {
		return ;
	}
	switch(c) {
		case 'a': {
			switch(map[I][J-1]) {
				case ' ': {
					map[I][J-1]='A';
					if((*is_stop)==1) {
						map[I][J]='@';
					} else {
						map[I][J]=' ';
					}
					*is_stop=0;
					J--;
					break;
				}
				case'*': {
					switch(map[I][map_size-2]) {
						case ' ': {
							if((*is_stop)==1) {
								map[I][J]='@';
							} else {
								map[I][J]=' ';
							}
							*is_stop=0;
							map[I][map_size-2]='A';
							J=map_size-2;
							break;
						}
						case '#': {
							break;
						}
						case'$': {
							*is_alive=0;
							printf("Game Over!");
							break;
						}
						case'@':{
							if((*is_stop)==1) {
								map[I][J]='@';
							} else {
								map[I][J]=' ';
							}
							*is_stop=0;
							map[I][map_size-2]='A';
							J=map_size-2;
							printMap(map_size);
					        getchar();
					        getchar();
					        *is_stop=1;
							break;
						}

					}
					break;
				}
				case'$': {
					*is_alive=0;
					printf("Game Over!");
					break;
				}
				case'@': {
					map[I][J-1]='A';
					if((*is_stop)==1) {
						map[I][J]='@';
					} else {
						map[I][J]=' ';
					}
					*is_stop=0;
					J--;
					printMap(map_size);
					getchar();
					getchar();
					*is_stop=1;
					break;
				}
				case '#': {
					break;
				}
			}
			break;
		}
		case 'd': {
			switch(map[I][J+1]) {
				case ' ': {
					map[I][J+1]='A';
					if((*is_stop)==1) {
						map[I][J]='@';
					} else {
						map[I][J]=' ';
					}
					*is_stop=0;
					J++;
					break;
				}
				case'*': {
					switch(map[I][1]) {
						case ' ': {
							if((*is_stop)==1) {
								map[I][J]='@';
							} else {
								map[I][J]=' ';
							}
							*is_stop=0;
							map[I][1]='A';
							J=1;
							break;
						}
						case '#': {
							break;
						}
						case'$': {
							*is_alive=0;
							printf("Game Over!");
							break;
						}
						case'@':{
							if((*is_stop)==1) {
								map[I][J]='@';
							} else {
								map[I][J]=' ';
							}
							*is_stop=0;
								map[I][1]='A';
							    J=1;
							printMap(map_size);
					        getchar();
					        getchar();
					        *is_stop=1;
							break;
						}
					}
					break;
				}
				case'$': {
					*is_alive=0;
					printf("Game Over!");
					break;
				}
				case'@': {
					map[I][J+1]='A';
					if((*is_stop)==1) {
						map[I][J]='@';
					} else {
						map[I][J]=' ';
					}
					*is_stop=0;
					J++;
					printMap(map_size);
					getchar();
					getchar();
					*is_stop=1;
					break;
				}
				case '#': {
					break;
				}
			}
			break;
		}
		case 'w': {
			switch(map[I-1][J]) {
				case ' ': {
					map[I-1][J]='A';
					if((*is_stop)==1) {
						map[I][J]='@';
					} else {
						map[I][J]=' ';
					}
					*is_stop=0;
					I--;
					break;
				}
				case'*': {
					switch(map[map_size-2][J]) {
						case ' ': {
							if((*is_stop)==1) {
								map[I][J]='@';
							} else {
								map[I][J]=' ';
							}
							*is_stop=0;
							map[map_size-2][J]='A';
					        I=map_size-2;
							break;
						}
						case '#': {
							break;
						}
						case'$': {
							*is_alive=0;
							printf("Game Over!");
							break;
						}
						case'@':{
							if((*is_stop)==1) {
								map[I][J]='@';
							} else {
								map[I][J]=' ';
							}
							*is_stop=0;
								map[map_size-2][J]='A';
					            I=map_size-2;
							printMap(map_size);
					        getchar();
					        getchar();
					        *is_stop=1;
							break;
						}
					}
					break;
				}
				case'$': {
					*is_alive=0;
					printf("Game Over!");
					break;
				}
				case'@': {
					map[I-1][J]='A';
					if((*is_stop)==1) {
						map[I][J]='@';
					} else {
						map[I][J]=' ';
					}
					*is_stop=0;
					I--;
					printMap(map_size);
					getchar();
					getchar();
					*is_stop=1;
					break;
				}
				case '#': {
					break;
				}
			}
			break;
		}
		case 's': {
			switch(map[I+1][J]) {
				case ' ': {
					map[I+1][J]='A';
					if((*is_stop)==1) {
						map[I][J]='@';
					} else {
						map[I][J]=' ';
					}
					*is_stop=0;
					I++;
					break;
				}
				case'*': {
					switch(map[1][J]) {
						case ' ': {
							if((*is_stop)==1) {
								map[I][J]='@';
							} else {
								map[I][J]=' ';
							}
							*is_stop=0;
							map[1][J]='A';
					        I=1;
							break;
						}
						case '#': {
							break;
						}
						case'$': {
							*is_alive=0;
							printf("Game Over!");
							break;
						}
						case'@':{
							if((*is_stop)==1) {
								map[I][J]='@';
							} else {
								map[I][J]=' ';
							}
							*is_stop=0;
								map[1][J]='A';
					            I=1;
							printMap(map_size);
					        getchar();
					        getchar();
					        *is_stop=1;
							break;
						}
					}
					break;
				}
				case'$': {
					*is_alive=0;
					printf("Game Over!");
					break;
				}
				case'@': {
					map[I+1][J]='A';
					if((*is_stop)==1) {
						map[I][J]='@';
					} else {
						map[I][J]=' ';
					}
					*is_stop=0;
					I++;
					printMap(map_size);
					getchar();
					getchar();
					*is_stop=1;
					break;
				}
				case '#': {
					break;
				}
			}
			break;
		}
	}

}
int main() {
	int n;
	int *is_alive;
	is_alive=(int *)malloc(sizeof(int));
	*is_alive=1;
	int *is_stop;
	is_stop=(int *)malloc(sizeof(int));
	*is_stop=0;
	scanf("%d",&n);
	getchar();
	readMap(n+2);
	while((c=getchar())!=EOF) {
		move(n+2, is_alive,is_stop);
		if(*is_alive!=0) {
			printMap(n+2);
		}
		getchar();
	}
	free(is_alive);
    free(is_stop);
}
