#include<stdio.h>
void trees(int *arr1,int *arr2,int num);
int main() {
	int n,tree[30000],i;
	scanf("%d",&n);
	int a[11];
	for(i=0;i<11;i++)
		a[i]=-2;
	for(i=0; i<n; i++)
		tree[i] = -1;
	for(i=0; i<n; i++) {
		scanf(" %d",&a[i]);
	}
	i=0;
	tree[0]=a[0];
	a[0] = -1;
	printf("%d\n",tree[0]);
	trees(tree,a,i);
}
void trees(int *arr1,int *arr2,int num) {
	int j,k=0;
	for(j=0;j<11;j++){
		if(arr2[j]!=-2){
			k++;
		}
	}
	for(j=0; j<k; j++) {
		if(arr2[j]!=-1) {
			if(arr2[j]<=arr1[num]) {
				arr1[2*num+1]=arr2[j];
				printf("%d\n",arr2[j]);
				arr2[j] = -1;
				break;
			}
		}
	}
	for(j=0; j<k; j++) {
		if(arr2[j]!=-1) {
			if(arr2[j]>arr1[num]) {
				arr1[2*num+2]=arr2[j];
				printf("%d\n",arr2[j]);
				arr2[j]=-1;
				break;
			}
		}
	}
	for(j=0; j<k; j++) {
		if(arr1[2*num+1]!=-1&&arr2[j]<=arr1[0]&&arr2[j]!=-1) {
			trees(arr1,arr2,2*num+1);
		}
	}
	for(j=0; j<k; j++) {
		if(arr1[2*num+2]!=-1&&arr2[j]>arr1[0]) {
			trees(arr1,arr2,2*num+2);
		}
	}
}
