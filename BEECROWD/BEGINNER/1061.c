#include <stdio.h>
int main()
{
    int h,hh,m,mm,d,dm,s,ss;

    scanf("Dia %d",&d);
    scanf("%d : %d : %d\n",&h,&m,&s);
    scanf("Dia %d",&dm);
    scanf("%d : %d : %d",&hh,&mm,&ss);

    s = ss - s;
    m = mm - m;
    h = hh - h;
    d = dm - d;

    if(s<0)
    {
        s=s+60;
        m=m-1;
    }

    if(m<0)
    {
        m=m+60;
        h=h-1;
    }

    if(h<0)
    {
        h=h+24;
        d=d-1;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);


    return 0;
}
