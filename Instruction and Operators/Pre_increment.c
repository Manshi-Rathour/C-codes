#include<stdio.h>

int main()
{
    int a = 23;
    int b = ++a;
    printf("%d\n", a);  // a = 24
    printf("%d\n", b);  // b = 24
    
    return 0;
}