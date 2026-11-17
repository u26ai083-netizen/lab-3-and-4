#include <stdio.h>
int main()
{
    int num,original,sum=0,i;
    printf("enter the number: ");
    scanf("%d", &num );
    original=num;

    while(num!=0)
    {
        i=num%10;
        sum=sum*10+i;
        num=num/10;

    }
    if(original==sum)
    {
        printf("the number is a palindrome.");

    }
    else{
        printf("the number is not palindrome.");
    }
    return 0;

    
}