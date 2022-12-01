#include<stdio.h>

int main(){
    int A, B;
    scanf("%d\n%d", &A, &B);
    printf("%d\n%d\n%d\n%d", A*((B%100)%10), A*((B%100)/10), A*(B/100), A*B);
} 