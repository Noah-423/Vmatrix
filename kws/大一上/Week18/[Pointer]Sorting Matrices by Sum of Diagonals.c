#include <stdio.h>
#include<stdlib.h>
#define MAX_TOTAL 10
#define MAX_SIZE 4
void inputMatrices(int (*p)[MAX_SIZE],size_t size){
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&(*(p+i))[j]);
			
		}
	}
    

}
void printMatrices(int matrixArr[MAX_SIZE][MAX_SIZE],size_t size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
			printf("%d ",*(*(matrixArr+i)+j));
		printf("%d\n",*(*(matrixArr+i)+size-1));
	}
	printf("\n");
}
int cmpMatrices(const void *firstMatrixPtr, const void *secondMatrixPtr, void *sizePtr){
	int *matrixSizePtr = (int *)sizePtr;
    int size = *matrixSizePtr;
   
    int (*arr1)[4] = (int (*)[4])firstMatrixPtr;
    int (*arr2)[4] = (int (*)[4])secondMatrixPtr;
    int i=0,sum1=0,sum2=0;
    for(i=0;i<size;i++)
    {sum1+=(*(arr1+i))[i];
    sum1+=(*(arr1+i))[size-1-i];}
	for(i=0;i<size;i++){sum2+=(*(arr2+i))[i];sum2+=(*(arr2+i))[size-1-i];}
	if(size%2==1)
	{
		sum1-=(*(arr1+(size-1)/2))[(size-1)/2];
		sum2-=(*(arr2+(size-1)/2))[(size-1)/2];
	}
    
    //printf("ajsi");
	if(sum1<sum2)return -1;
	else if(sum1==sum2)return 0;
	else return 1;
    
} 
