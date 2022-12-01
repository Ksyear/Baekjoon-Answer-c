#include<stdio.h>

int main() {
    int a[1000]={ 0, }, b, max;
    double sum = 0;
    scanf("%d", &b);
    for (int i=0;i<b;i++) {
        scanf("%d", &a[i]);
        if (i==0) 
            max=a[i];
        if (max<a[i]) 
            max=a[i];
    }
    for (int i=0;i<b;i++) 
        sum+=(double)a[i]/max*100;
    printf("%f", sum/b);
}