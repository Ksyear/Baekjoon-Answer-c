#include<stdio.h>

int main(){
    int a, b=1, c=0;
    scanf("%d", &a);
    while (a>b){
        c++;
        b=b+(6*c);
    }
    printf("%d", c+1);
}