#include <stdio.h>
int main()
{
    double first,second,third,fourth,last,avg1,avg2;
    scanf("%lf %lf %lf %lf",&first,&second,&third,&fourth);
    avg1 = (first*2+second*3+third*4+fourth)/(2+3+4+1);
    printf("Media: %.1f\n",avg1);
    if (avg1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg1>=5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&last);
        printf("Nota do exame: %.1f\n",last);
        avg2 = (avg1+last)/2;
        if (avg2>5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg2);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    return 0;
}
