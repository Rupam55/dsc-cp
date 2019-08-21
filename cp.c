#include<stdio.h>
int main()
{
    float a;
    float b;
    int c;
    scanf("%f",&a);
    b=a/2;
    b=b+0.5;
    c=(a/2)+1;
    printf("%d",c);
    if((int)b==c)
    printf("odd");
    else
    printf("even");
    
}