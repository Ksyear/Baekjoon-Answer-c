#include <stdio.h>

int main() {
	int b, c;
	scanf("%d", &b);
    int a[b];
    for(int i=0;i<b;i++){
        scanf("%d", &a[i]);
    }
    int min=a[0], max=a[b-1];
    for (int j = 0; j < b; j++)
	{
		if (min > a[j]) 
			min = a[j]; 
		if (max < a[j]) 
			max = a[j]; 
	}
    printf("%d %d", min, max);
}