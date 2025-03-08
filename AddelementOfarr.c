#include<stdio.h>
int main(){
    int a[5]={1,2,3,5,6};
    int n=5, pos = 3, value = 4;
    printf("before \n");

    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    for(int i=n;i>=pos;i--){
        a[i] = a[i-1];
    }
    a[pos-1] = value;
    printf("\n");
    printf("after \n");
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
}