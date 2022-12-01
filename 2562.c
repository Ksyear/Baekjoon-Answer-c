#include <stdio.h>

int main() {
	int a[8];
    for(int i=0;i<9;i++){
        scanf("%d", &a[i]);
    }
    int max=a[0];
    for (int j = 0; j < 9; j++)
	{
		if (max < a[j]) 
			max = a[j]; 
	}
    printf("%d\n",max);
    for (int j = 0; j < 9; j++)
	{
		if (max == a[j]) 
			max = j+1; 
	}
    printf("%d",max);
}