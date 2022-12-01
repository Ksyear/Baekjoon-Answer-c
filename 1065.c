#include <stdio.h>

int main() {
	int a=0;
	int b;
	int c1, c2, c3;
	scanf("%d", &b);
	if (b<=99)
		a=b;
	else {
		a = 99;
		for (int i=100;i<=b;i++)
		{
			c1=i/100;
			c2=(i%100)/10;
			c3=i%10;
			if ((c1-c2)==(c2-c3))
				a++;
		}
	}
	printf("%d", a);
}