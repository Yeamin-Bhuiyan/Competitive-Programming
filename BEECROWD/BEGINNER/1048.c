#include<stdio.h>
int main()
{
    float base,ear,tot;
    int per;
    scanf("%f",&base);
    if (base>=0.00 && base<=400.00)
    {
        per=15;
        ear=(base*per)/100;
        tot= base+ear;
        printf("Novo salario: %.2f\n",tot);
        printf("Reajuste ganho: %.2f\n",ear);
        printf("Em percentual: %d %%\n",per);
    }else if (base>400.00 && base<=800.00)
    {
        per=12;
        ear=(base*per)/100;
        tot= base+ear;
        printf("Novo salario: %.2f\n",tot);
        printf("Reajuste ganho: %.2f\n",ear);
        printf("Em percentual: %d %%\n",per);
    }else if (base>800.00 && base<=1200.00)
    {
        per=10;
        ear=(base*per)/100;
        tot= base+ear;
        printf("Novo salario: %.2f\n",tot);
        printf("Reajuste ganho: %.2f\n",ear);
        printf("Em percentual: %d %%\n",per);
    }else if (base>1200.00 && base<=2000.00)
    {
        per=7;
        ear=(base*per)/100;
        tot= base+ear;
        printf("Novo salario: %.2f\n",tot);
        printf("Reajuste ganho: %.2f\n",ear);
        printf("Em percentual: %d %%\n",per);
    }else if (base>2000.00)
    {
        per=4;
        ear=(base*per)/100;
        tot= base+ear;
        printf("Novo salario: %.2f\n",tot);
        printf("Reajuste ganho: %.2f\n",ear);
        printf("Em percentual: %d %%\n",per);
    }
    return 0;
}
