#include <stdio.h>
int main()
{
    int a,b,i,sum,temp;
    while(1)
    {
        scanf("%d%d", &a, &b);
        if(a<=0 || b<=0)
        {
            break;
        }

        else
        {
            sum=0;
            if(a>b)
            {
                temp = a;
                a = b;
                b = temp;
            }

            for(i=a; i<=b; i++)
            {
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
