#include <stdio.h>

int main() {
	int a, b, c, sum;
	int count[10] = { 0, };
	scanf("%d\n%d\n%d", &a, &b, &c);
	sum=a*b*c; 
	for(sum;sum>0;sum)
	{
		a=sum%10;
		count[a]+=1;
		sum/=10;
	}
	for (int i=0;i<10;i++)
		printf("%d\n", count[i]);
}