#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d", &b, &c);
    for(int i=0;i<b;i++){
        scanf("%d", &a);
        if(a<c) printf("%d ",a);
    }
}