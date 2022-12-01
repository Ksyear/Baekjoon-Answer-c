#include <stdio.h>

int main() {
	int a, b, c, d, e=1, f;
	scanf("%d", &a);
    f=a;
    for(;;){
        b=f/10;
        c=f%10;
        d=b+c;
        f=c*10+d%10;
        if(a==f) break;
        e++;
    }
	printf("%d\n", e);
}