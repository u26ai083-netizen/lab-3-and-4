#include <stdio.h>
int main()
{
    int num,sum=0,og,i;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        i=num%10;
        sum=sum*10+i;
        num=num/10;

    }
    printf("%d",sum);
}