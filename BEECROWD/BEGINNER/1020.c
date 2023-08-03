#include <stdio.h>
#include <math.h>

int main()
{
    int n,year,mon,days;
    scanf("%d",&n);
    year = n/365;
    n = n%365;
    mon = n/30;
    days= n%30;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",mon);
    printf("%d dia(s)\n",days);
    return 0;
}

