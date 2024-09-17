#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a=100,b=500;
    printf("Before calling function a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After calling function a=%d,b=%d\n",a,b);


}
void swap(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;


}


