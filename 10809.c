#include <stdio.h>

int main(){
	char ch[100]={0, };
    int num[26];
    int i, j;
    memset(num, -1, 26*sizeof(int));
    scanf("%s", ch);
    for (i=97;i<123;i++) {
        for ( j = 0; ; j++ ) {
            if (ch[j]==0)
                break;
            else if (ch[j]==i){
                num[i-97]=j;
                break;
            }
        }
    }
    for (i=0;i<26;i++){
        printf("%d ", num[i]);
    }
}