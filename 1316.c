#include <stdio.h>
#include <string.h>

int main(void)
{
	int N, i, j, k, cnt, cnt_1;
	char word[100][100];
	scanf("%d", &N);
	cnt = N;
	cnt_1 = N;
	for (i = 0;i < N;i++)
		scanf("%s", word[i]);
	for (i = 0;i < N;i++){
		for (j = 0;j < strlen(word[i]);j++){
			if (word[i][j] != word[i][j + 1]){
				for (k = j + 1;k < strlen(word[i]);k++){
					if (word[i][j] == word[i][k]){
						cnt--;
						break;
					}
				}
				if (cnt != cnt_1){
					cnt_1--;
					break;
				}
			}
		}
	}
	printf("%d", cnt);
}