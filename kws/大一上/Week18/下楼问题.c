#include<stdio.h>
int answer(int h,int s);
int main(){
	int h,s;
	scanf("%d%d",&h,&s);
	printf("%d",answer(h,s));
} 
int answer(int h,int s){
	int b=0;
	if(h<0)
	 return 0;
	if(h==0){
		return 1;
	}
	else{
		int i;
		for(i=1;i<=s;i++){
			
			b=b+answer(h-i,s);
		}
	}
	return b;
	
}
