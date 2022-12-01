#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    for (int i=0;i<num;i++)
    {
        a, b, c, d, e, f = map(int, input().split())
        d = ((d-a)**2+(e-b)**2)**0.5

        if f > c:
          c, f = f, c
        
        if d == 0:
            if c == f:
                print(-1)
            else:
                print(0)
    
        else:
            if (c+f==d) or (c-f==d):
                print(1)
            elif (c+f)>d and (c-f)<d:
                print(2)
            else:
                print(0)
    }
}