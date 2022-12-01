#include<stdio.h>

void main(){
    int a, b, c, i=1;
    scanf("%d %d %d", &a, &b, &c);
    if(b>c||b==c)
        printf("-1");
    else{
        /*for(;;){
            a=a-(c-b);
            i++;
            if(a==0)
                break;
        }*/
        i=a/(c-b)+1;
        printf("%d", i);
    }
}