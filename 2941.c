#include <stdio.h>
#include <string.h>

int main(){
	char a[101];
	char s[8][4] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
	int cnt = 0;
	char* p;
	scanf("%s", a);
	cnt = strlen(a);
	for (int i=0;i<8;i++) {
		p=a;
		while (strstr(p, s[i])) {
			cnt--;
			p=strstr(p, s[i])+2;
		}
	}
	printf("%d\n", cnt);
}