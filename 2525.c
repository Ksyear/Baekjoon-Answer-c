#include<stdio.h>

int main(){
    int x, y, z;
    scanf("%d %d\n%d", &x, &y,& z);
    if(x+((y+z)/60)>23&&y+z>=60) printf("%d %d", x+((y+z)/60)-24, (y+z)%60);
    else if(y+z>=60) printf("%d %d", x+(y+z)/60, (y+z)%60);
    else  printf("%d %d", x, y+z);
} 