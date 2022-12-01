#include<stdio.h>

int main() {
    int a[10], b[42]={NULL}, c=0;
    for (int i=0;i<10;i++) 
        scanf("%d", &a[i]);
    for (int i=0;i<10;i++) {
        int d=a[i]%42;
        if (b[d]==NULL) {
            b[d]+=1;
            c+=1;
        }
    }
    printf("%d", c);
}