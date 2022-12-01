#include <stdio.h>

int main(){
	int a, sum=0;
	scanf("%d", &a);
    char b[a];
    scanf("%s", b);
    for(int i=0;i<a;i++)
        sum+=b[i]-'0';
    printf("%d", sum);
}