#include<stdio.h>
void rev(char *str, int len);
int main(){
    char str[100];
    gets(str);
    int len;
    for(len=0;str[len]!='\0';len++);
    printf("Length of the string is: %d\n",len);
    rev(str, len);
    return 0;
}
void rev(char *str,int len){
        char temp;
        int first=0, last=len-1;

        while (first<last){
            temp=str[first];
            str[first]=str[last];
            str[last]=temp;
            first++;
            last--;

        }
        puts(str);


}
