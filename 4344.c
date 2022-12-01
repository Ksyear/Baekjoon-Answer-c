#include<stdio.h>

int main() {
	int a, b, c=0;
	float d[1000]={0.0, }, e=0.0, f=0.0;
	scanf("%d", &a);
	for (int i=0;i<a;i++) {
		scanf("%d", &b);
		for (int j=0;j<b;j++) {
			scanf("%f", &d[j]);
			e+=d[j];
		}
		e/=b;
		for (int k=0;k<b;k++) {
			if (e<d[k]) {
				c++;
			}
		}
		f=((float)c/(float)b)*100;
		printf("%.3f%%\n", f);
		f=0.0;
		c=0;
		e=0.0;
	}
}