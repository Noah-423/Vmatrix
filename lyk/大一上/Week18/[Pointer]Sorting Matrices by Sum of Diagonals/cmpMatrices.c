#include<stdio.h>
#include<stdlib.h>
#include "cmpMatrices.h"
void inputMatrices(int (*matrix)[4], size_t size){

    for(size_t row = 0; row < size; row++){
        for(size_t col = 0; col < size; col++){
            scanf("%d", &matrix[row][col]);
        }
    }    
}

int cmpMatrices(const void *firstMatrixPtr, const void *secondMatrixPtr, void *sizePtr) {
    size_t *matrixSizePtr = (size_t *)sizePtr;
    size_t matrixSize = *matrixSizePtr;
    const int (*first_Matrix) [4] = (const int (*) [4])firstMatrixPtr;
    const int (*second_Matrix) [4] = (const int (*) [4])secondMatrixPtr;  
    int firstSum = 0, secondSum = 0;

    for(size_t i = 0; i < matrixSize; i++){
        firstSum += first_Matrix[i][i] + first_Matrix[i][matrixSize-1-i];
        secondSum += second_Matrix[i][i] + second_Matrix[i][matrixSize-1-i];
    }
    if(matrixSize%2!=0){
        size_t m = matrixSize/2;
        firstSum -= first_Matrix[m][m];
        secondSum -= second_Matrix[m][m];
    }
    //printf("firstSum = %d, secondSum = %d\n", firstSum, secondSum);
    if(firstSum < secondSum){
        return -1;       
    }else if(firstSum == secondSum){
        return 0;
    }else{
        return 1;
    }
}

void printMatrices(int (*matrix) [4], size_t size){
    for(size_t row = 0; row < size; row++){
        for(size_t col = 0; col < size; col++){
            printf("%d", matrix[row][col]);
            if(col == size-1){
                printf("\n");
            }else{
                printf(" ");
            }         
        }
    }
    printf("\n");        
}
