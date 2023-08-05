#include <stdio.h>

int main()
{
    double sal,tax;
    scanf("%lf", &sal);

    if(sal <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (sal >= 2000.01 && sal <= 3000.00)
    {
        tax = ((sal-2000.00)*8)/100;
        printf("R$ %.2f\n",tax);
    }
    else if (sal >= 3000.01 && sal <= 4500.00)
    {
        tax = ((sal-3000.00)*18)/100;
        printf("R$ %.2f\n",tax+80);
    }
    else if (sal >= 4500.01)
    {
        tax = ((sal-4500.00)*28)/100;
        printf("R$ %.2f\n",tax+80+270);
    }
    return 0;
}
