#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    scanf("%lf",&n);
    int a,b,c,d,e,f,g,h,i,j,k,m,x;
    x = n*100;                      //100 50 20 10 5 2 1 .5 .25 .1 .05 .01
    a= x/10000;                    //10000 5000 2000 1000 500 200 100 50 25 10 5 1
    x= x%10000;                   // a      b   c    d    e   f   g   h   i  j  k m
    b= x/5000;
    x = x%5000;
    c= x/2000;
    x = x%2000;
    d= x/1000;
    x = x%1000;
    e= x/500;
    x = x%500;
    f= x/200;
    x = x%200;
    g = x/100;
    x = x%100;
    h= x/50;
    x = x%50;
    i= x/25;
    x = x%25;
    j= x/10;
    x = x%10;
    k= x/5;
    m= x%5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",m);
    return 0;
}

