#include <stdio.h>

int main()
{
    int num,hour;
    float sal_per_hour,salary;
    scanf("%d%d%f",&num,&hour,&sal_per_hour);
    salary=(hour*sal_per_hour);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}

