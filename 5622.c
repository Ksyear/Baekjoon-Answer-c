#include <stdio.h>

int main(){
	int sum=0, a, b;
	char ch[16];
	scanf("%s", ch);
	a=strlen(ch);
	for (int i=0;i<a;i++){
		b=ch[i]-'A';
		if (b>17)
			b--;
		if (b==24)
			b--;
		sum+=((b/3)+3);
	}
	printf("%d", sum);
}