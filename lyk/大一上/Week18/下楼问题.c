#include<stdio.h>
int countmethods(int h, int s){
    int count = 0;
    int end = 1;

    for(int i = 1; i <= s; i++){
        if(h >= i){
            end = 0;
            count += countmethods(h - i, s);
        }
    }

    if(end){
        return 1;
    }else{
        return count;
    }

}
int main(){
    int h, s, methods;

    scanf("%d%d", &h, &s);

    methods = countmethods(h,s);

    printf("%d\n", methods);
}
