//#include "cmpMatrices.h"
#define MAX_TOTAL 10
#define MAX_SIZE 4
void inputMatrices(int (*matrix)[4], size_t size);
int cmpMatrices(const void *firstMatrixPtr, const void *secondMatrixPtr, void *sizePtr);
void printMatrices(int (*matrix)[4], size_t size);
