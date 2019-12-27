#include<stdio.h>
void fuck(int arr[],int n);
int answer[1000]; 
int main(){
	int n;
	for(int i=0;i<1000;i++){
		answer[i]=100;
	}
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	/*	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
		
	}*/
	
	answer[0]=arr[0];
	fuck(arr,n);
	for(int i=0;i<1000;i++){
		if(answer[i]!=100){
			printf("%d\n",answer[i]);
		}
	}
} 
void fuck(int arr[],int n){
	static int t=0;
	if(t==n-1)
	return ;
	else{
		for(int i=0;i<1000;){
			if(arr[t+1]<=answer[i]){
				if(answer[2*i+1]==100){
					answer[2*i+1]=arr[t+1];
					t++;
					fuck(arr,n);
					break ;
				}
				else{
					i=2*i+1;
					continue;
				}
			}
			else{
				if(answer[2*i+2]==100){
					answer[2*i+2]=arr[t+1];
					t++;
					fuck(arr,n);
					break ;
				}
				else{
					i=2*i+2;
					continue;
				}
			}
		}
		return ;
	}
}
