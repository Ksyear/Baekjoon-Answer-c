#include <stdio.h>
#include <string.h>

int main(){
	char ch[100]={0, };
    int num1, num2, i, j, k;
    scanf("%d", &num1);
    for(i=0;i<num1;i++){
        scanf("%d %s", &num2, ch);
        for(k=0;k<strlen(ch);k++){
            for(j=0;j<num2;j++)
                printf("%c", ch[k]);
        }
        printf("\n");
    }
}