#include <stdio.h>
int main()
{
    int commission,sales;
    printf("enter the sales: ");
    scanf("%d", &sales);
    if(sales<=500)
    {
        commission=sales+sales*0.05;
        printf("commission is %d", commission);
    }
    else if( sales>500 && sales<=2000)
    {
        commission= 35+500*0.01+500;
        printf("commission is %d", commission);
    }
    else if(sales >2000 && sales<=5000)
    {
        commission=185+2000+2000*0.12;
        printf("commission is %d", commission);
        
    }
    else
    {
        commission=sales*(12.5/100);
        printf("commission is %d", commission);
        

    }
    
    
}