#include<stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x==0&&y<45) printf("%d %d", x-1+24, y+60-45);
    else if(y<45) printf("%d %d", x-1, y+60-45);
    else  printf("%d %d", x, y-45);
} 