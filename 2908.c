#include <stdio.h>

int main(){
    int a, b;
	int c1, c2, c3;
	scanf("%d %d", &a, &b);

	c1=a/100;
	c2=(a%100)/10;
	c3=a%10;
    a=c3*100+c2*10+c1;
    c1=b/100;
	c2=(b%100)/10;
	c3=b%10;
    b=c3*100+c2*10+c1;

    if(a<b)
        printf("%d", b);
    else
        printf("%d", a);
}