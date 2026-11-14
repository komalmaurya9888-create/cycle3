#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d", &a, &b);
    
    printf(":\nBefour swapping:");
    printf("\n =%d and b = %d", a,b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n\nAfter swapping:");
    printf("\na = %d and b = %d",a,b);

    return 0;

}