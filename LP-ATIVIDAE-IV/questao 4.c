#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct banco
{
    char nome [250];
    int nDaConta;
    char tipoConta [250];
    double trasferencia;
    double saldo;

};

void menu(){

    printf("1 - Realizar Saque \n");
    printf("2 - Realizar Deposito \n");
    printf("3 - Imprimir Saldo Atual \n");
    printf("4 - Sair do progama \n");
}

void saque(struct banco operacoes){

    printf("Qual o valor que o senhor(a) deseja sacar? \n");
    scanf("%lf", &operacoes.trasferencia);

    operacoes.saldo -= operacoes.trasferencia;
    
}

void deposito(struct banco operacoes){

    printf("Qual valor que o senhor(a) deseja depositar? \n");
    scanf("%lf", &operacoes.trasferencia);

    operacoes.saldo += operacoes.trasferencia;   
}

void mostrarSaldo(struct banco operacoes){

    printf("Saldo Disponivel: %1.lf \n", operacoes.saldo);

}

void encerrarProgama(){
        printf("Progama encerrado! \n");
}




int main(){

    int codigo;
    

    struct banco operacoes;




    printf("Seu nome? \n");
    gets(operacoes.nome);

    printf("Qual é o tipo de sua conta? \n");
    gets(operacoes.tipoConta);

    printf("Qual o numero de sua conta? \n");
    scanf("%d", &operacoes.nDaConta);

    system("cls");

    do
    {
        menu();
        scanf("%d", &codigo);

        if (codigo == 1){
            saque(operacoes);
        }

        if (codigo == 2){
        deposito(operacoes);
        }

        if (codigo == 3){
        mostrarSaldo(operacoes);
        }

        if (codigo == 4){
        encerrarProgama();
        }

        
    } while (codigo != 4);
    
}
