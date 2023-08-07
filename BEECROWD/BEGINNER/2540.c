#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
         float a,c;
        c = (n*2)/3.0;
        for(int i=0; i<n; i++)
        {
            int x,b;
            scanf("%d",&x);
            if(x==1)
            {
                a=a+1;
            }
        }
        if(a>=c)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
        a=0;
        c=0;
    }

    return 0;
}



