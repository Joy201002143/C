//Pass by value to swap
#include<stdio.h>
void swap(int a, int b);
int main(){

    int a=500, b=200;
    printf("Before swap\n");
    printf("a=%d, b=%d\n",a,b);
    swap(a,b);
    return 0;

}
void swap(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap\n");
    printf("a=%d, b=%d",a,b);
}

