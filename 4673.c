#include <stdio.h>

int main() {
	int n[10000]={0, };
	int x[10000]={0, };
	int i, j, a, b, c, d, e;
	for (i=0;i<10000;i++) {
		n[i]=i+1;
		a=n[i]%10;
		b=(n[i]%100-a)/10;
		c=(n[i]%1000-b-a)/100;
		d=(n[i]%10000-c-b-a)/1000;
		e=n[i]/10000;
		x[i]=n[i]+a+b+c+d+e;
	}
	for (i=1;i<10001;i++) {
		for (j=0;j<10000;j++) {
			if (n[i]==x[j])
				n[i]=0;
		}
	}
	for (i=0;i<10000;i++) {
		if (n[i]!=0)
			printf("%d\n", n[i]);
	}
}