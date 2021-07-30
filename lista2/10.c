#include<stdio.h>
int main()
{
    float sh=0, qm=0, sm=0, mm=0, alt1=0, alt2=1000000, mt=0, alt=0, st=0, i;
    int sexo;
    for (i=0; i<=14; i++ )
    {
        printf("Informe o codigo do sexo [1] Masculino - [2] Feminino: ");
        scanf("%i",&sexo);
        fflush(stdin);
        if (sexo==1)
        {
            printf("Informe a altura: ");
            scanf("%f",&alt);
            sh = sh + alt;
            fflush(stdin);
        }
        if (sexo==2)
        {
            printf("Informe a altura: ");
            scanf("%f",&alt);
            qm = qm +1;
            sm = sm + alt;
            mm = sm/qm;
            fflush(stdin);
        }
        if (alt > alt1)
        {
            alt1 = alt;
        }
        if (alt < alt2)
        {
            alt2 = alt;
        }
    }
    st = sh + sm;
    mt = st / 15;
    printf("\nMaior altura: %.2f", alt1);
    printf("\nMenor altura: %.2f", alt2);
    printf("\nMedia de altura das mulheres: %.2f", mm);
    printf("\nMedia de altura da turma: %.2f",mt);
    return(0);
}

