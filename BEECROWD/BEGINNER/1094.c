#include<stdio.h>
int main()
{
	int test,n,total,C=0,R=0,S=0;
	char ch;
	double x,y,z;

	scanf("%d",&test);

	for(int i=0;i<test;i++)
	{
		scanf("%d %c",&n,&ch);

	    if(ch=='C')
		{
			C=C+n;
		}
		else if(ch=='R')
		{
			R=R+n;
		}
		else
		{
			S=S+n;
	    }
	}
	total=C+R+S;

	x=(C*100.00)/total;
	y=(R*100.00)/total;
	z=(S*100.00)/total;
	printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);
    return 0;
}
