#include<stdio.h>
#include "pf.h"
int main(){
    char arr[100];
    void *(*pf[3])(char *)={fun1,fun2,fun3};
    scanf("%s",arr);
    for(int i=0;i<3;i++){
        *(*pf[i])(arr);
    }
}
#include"stdio.h"

void *(*pf[3])(char *p);
void *fun1(char *p)
{
    printf("fun1:%s\n",p);
    return p;
}

void *fun2(char *p)
{
    printf("fun2:%s\n",p);
    return p;
}

void *fun3(char *p)
{
    printf("fun3:%s\n",p);
    return p;
}
