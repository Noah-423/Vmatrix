#include<stdio.h>
#include<stdlib.h>
int main() {
        int *doubleCapacity(int *list, int size, int addSize);
        int m, n;
        scanf("%d", &m);
        scanf("%d", &n);
 
        int a[10];
        int i = 0;
        for (i = 0; i < m; i++)
                scanf("%d", &a[i]);
 
        int *newlist = doubleCapacity(a, m, n);
 
        for (i = 0; i < (m + n); i++)
                printf("%d ", newlist[i]);
        free(newlist);
        return 0;
}
int *doubleCapacity(int *list, int size, int addSize){
    int p=sizeof(int)*(size+addSize);
    int q=sizeof(int)*size;
    int *newlist=malloc(p);
    memcpy(newlist,list,q);
    for(int i=size;i<size+addSize;i++){
        *(newlist+i)=0;
    }

    return newlist;
}
