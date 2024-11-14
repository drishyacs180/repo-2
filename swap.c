#include<stdio.h>
void main()
{   int temp,a,b;
    printf("Enter the two numbers");
    scanf("%d%d,&a,&b");
    temp=a;
    a=b;
    b=temp;
    printf("Number after swap is a=%d and b=%d",a,b)
}
