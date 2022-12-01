#include <stdio.h>

int main(){
    char a[1000001]={0, };
    int count=0, i;
    gets(a);
    if(a[0]==' ')
        count-=1;
    for(i=0;i<1000000;i++){
        if(a[i]=='\0')
            break;
        if(a[i+1]=='\0')
            if(a[i]==' ')
                continue;
        if(a[i]==' ')
            count++;
    }
    printf("%d", count + 1);
}