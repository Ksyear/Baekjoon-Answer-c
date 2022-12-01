#include <stdio.h>
#include <string.h>

int main(){
	char ch[1000000]={0, };
	int a[26]={0, };
	scanf("%s", &ch);
	int max_i=0, max_c=0, result=0;

	for (int k=0;k<26;k++){
		for (int i=0;i<strlen(ch);i++){
			if (((k+97)==ch[i])||((k+65)==ch[i]))
				a[k]++;
		}
	}

	max_c=a[0]; 
	for (int i=0;i<26;i++){
		if (max_c<a[i]){
			max_c=a[i];
			max_i=i;
		}
	}

	for (int i=0;i<26;i++){
		if (max_c==a[i])
			result++;
	}
	
	if (result==1)
		printf("%c\n", max_i+65);
	else if (result>1)
		printf("?");
}