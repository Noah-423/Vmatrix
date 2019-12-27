#include<stdio.h>
void showarr(int *arr, int i){
    for(i = 0; i < 2062; i++){
        if(arr[i] != -1){
            printf("%d\n", arr[i]);
        }
    }
    
    return;
}
int main(){
    int n = 0;
    int arr[100000];
    int f, s;
    int num;
    for(int i = 0; i < 2062; i++){
        arr[i] = -1;
    }
    scanf("%d", &n);
    scanf("%d", &num);
    arr[0] = num;
    n--;
    while(n--){
        scanf("%d", &num);
        f = 0;
        while(1){
            //choose father
            if(num <= arr[f]){
                f = 2*f+1;
            }else{
                f = 2*f+2;
            }
            //can you be father?
            if(arr[f] == -1 ){
                arr[f] = num;
                break;
            }
        }
    }
    showarr(arr, 0);
    return 0;
}
