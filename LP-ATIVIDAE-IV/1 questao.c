#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contato
{
   char nome [250];
   char telefone [250];
   char email [250];

};


char* pesquisaNome(struct contato *cadastro, char *pesquisa){
    int i;
    for (i = 0; i < 1; i++)
    {
        if (strcmp(cadastro[i].nome, pesquisa) == 0)
        {
            printf("Nome: %s \n", cadastro[i].nome);
            printf("Contato: %s \n", cadastro[i].telefone);
            return;
        }
    }

    printf("Contato invalido");   

}


int main(){

    int i;
    char pesquisa [250];

        struct contato cadastro[2];

for (i = 0; i < 2; i++)
{
    printf("Escreva o %d nome \n", i+1);
    gets(cadastro[i].nome);
    
    printf("Escreva o %d telefone \n", i+1);
    gets(cadastro[i].telefone);
    
    printf("Escreva o %d email \n", i+1);
    gets(cadastro[i].email);

    system("cls");
    
}

printf("Escreva o nome que voce deseja saber o telefone \n");
gets(pesquisa);


pesquisaNome(cadastro, pesquisa);


}
