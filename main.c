#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 number: ");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("%d is min",a);
    }
    else
    {
        printf("%d is min",b);
    }
    return 0;
}
