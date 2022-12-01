#include <stdio.h>

int main(void)
{
    char ch;
    while ((ch = getc(stdin)) != EOF)
        putc(ch, stdout);
    return 0;
}