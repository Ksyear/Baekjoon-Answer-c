#include<stdio.h>
#include<string.h>

int main() {
    int b, c, d;
    char a[80];
    scanf("%d", &b);
    for(int j=0;j<b;j++){
        c=0, d=1;
        scanf("%s", a);
        for (int i=0;i<strlen(a);i++) {
            if(a[i]=='O'){
                c+=d;
                d++;
            }
            else if(a[i]=='X')
                d=1;
        }
        printf("%d\n", c);
    }
}