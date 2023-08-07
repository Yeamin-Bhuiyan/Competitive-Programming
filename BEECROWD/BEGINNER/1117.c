#include <stdio.h>
int main()
{
    double a,b=0,sum=0,d=0;
    while(1)
    {
        if(d==2)
            break;
        scanf("%lf", &a);
        if(a>=0 && a<=10)
        {
            d++;
            sum+=a;
        }
        else
            printf("nota invalida\n");
    }
    b=sum/2.00;
    printf("media = %.2lf\n", b);
    return 0;
}
