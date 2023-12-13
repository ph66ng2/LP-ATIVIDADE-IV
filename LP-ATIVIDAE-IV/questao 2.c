#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct boletim
{
    char nome [250];
    char dataDeNascimento [250];
    int notas[2];
    double media;

};


void mediaCauculo(struct boletim *aluno){

    int i;
    int j;
    double mediaTotal = 0;
    int soma = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Nome: %s \n", aluno[i].nome);

        printf("Data de Nascimento: %s \n", aluno[i].dataDeNascimento);

        for (j = 0; j < 2; j++)
        {
            printf("%d Nota: %d \n", j+1 ,aluno[i].notas[j]);

            soma += aluno[i].notas[j];
        }
    
            mediaTotal = soma / 2;

            soma = 0;

        printf("Media: %lf \n", mediaTotal);
        
        if (mediaTotal >= 7)
        {
            printf("Voce passou! \n");
        } else {
            printf("Voce nao passou! \n");
        }
        
    }
    
}



int main(){

    int i;
    int j;


    struct boletim aluno[5];

    for ( i = 0; i < 5; i++)
    {
        system("cls");

        printf("Escreva o %d nome \n", i+1);
        gets(aluno[i].nome);

        printf("Escreva a data de nascimento \n");
        gets(aluno[i].dataDeNascimento);

        for (j = 0; j < 2; j++)
        {
        printf("Escreva as 2 notas \n");
        scanf("%d", &aluno[i].notas[j]);
        }
        
        
        fflush(stdin);
    }

    system("cls");

    mediaCauculo(aluno);

    

        
    


}
