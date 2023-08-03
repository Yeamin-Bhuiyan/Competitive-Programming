#include <stdio.h>

int main()
{
    char name[25];
    double salary,sales,TOTAL;
    gets(name);
    scanf("%lf%lf",&salary,&sales);
    TOTAL = (salary+((sales*15)/100));
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
