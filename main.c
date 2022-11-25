#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PACIENTES 50
#define SIZE 200
#include <locale.h>


typedef struct{

char nome [SIZE][50],endereco[SIZE][50],bairro[SIZE][50],cidade[SIZE][50],estado[SIZE][50],complemento[SIZE][50],email[SIZE][50],informacoesadicionais[50];
int idade[50],cpf[11], telefone[10], numdacasa[50], cep[9], datadenascimento[4], datadodiagnostico[50],anoatual[4];

} Paciente;
void menu();
void cadastrar();
void consultar();
void remover();
void sair();


int main(int argc, char const *argv[]){
    menu();
    /*code*/
    return 0;
}
void menu(){
    system ("cls");
    int op;
    do {
            printf("\n\t          IIII\n");
        printf("\t          IIII\n");
        printf("\t      IIIIIIIIIIII\n");
        printf("\t      IIIIIIIIIIII\n");
        printf("\t          IIII\n");
        printf("\t          IIII\n\n");

            printf ("\n\t\t\t\t\t\aHOSPITAL\t\t\t");
    printf("\n\n ---------------------------------------------------------------------\n\n");
            printf ("\t\t\t\n\t\t\t\tOla, Seja Bem Vindo!\t\t\t\n");
            printf("\n\n ---------------------------------------------------------------------\n\n");
        printf ("\n 1 - Cadastrar Paciente\n 2 - Remover Paciente\n 3 - Consultar Paciente");
        printf ("\n 4 - SAIR ");
        printf ("\n Qual opcao deseja?\t");
        scanf("%d", &op);
        getchar();
        switch (op){
    case 1:
        cadastrar();
        break;
    case 3:
        remover();
        break;
    case 2:
        consultar();
        break;
    case 4:
        menu();
        break;

    case 5:
        system("exit");
        break;
 default:
        printf("Opcao invalida");
        break;
        getchar();
        getchar();
        }
    } while(op!=6);

}
void cadastrar(){
    system ("cls");
    char nome[50],endereco[50],bairro[50],cidade[50],estado[50],complemento[50],email[50],informacoesadicionais[50];
    int idade[50],cpf[11], telefone[10], numdacasa[50], cep[9], datadenascimento[4], datadodiagnostico[50],anoatual[4];
    int op;
    do{
            system ("cls");
            printf ("\n Nome: ");
    fgets(nome, sizeof (nome), stdin);
    printf ("\n Endereco: ");
    scanf("endereco");
    fgets(endereco, sizeof (endereco), stdin);
    printf ("\n Bairro: ");
    scanf ("bairro");
    fgets(bairro, sizeof (bairro), stdin);
    printf ("\n Cidade: ");
    scanf ("cidade");
    fgets(cidade, sizeof (cidade), stdin);
    printf ("\n Estado: ");
    scanf ("estado");
    fgets(estado, sizeof (estado), stdin);
    printf ("\n Bairro: ");
    scanf ("complemento");
    fgets(complemento, sizeof (complemento), stdin);
    printf ("\n E-mail: ");
    scanf ("email");
    fgets(email, sizeof (email), stdin);
    printf ("\n Informacoes Adicionais: ");
    scanf ("informacoesadicionais");
    fgets(informacoesadicionais, sizeof (informacoesadicionais), stdin);

    printf("Informe ano do nascimento : "); scanf("%d", &datadenascimento);
    fgets(datadenascimento, sizeof (datadenascimento), stdin);
    printf ("Informe o Ano m que estamos: "); scanf("%d%", &anoatual);
    fgets(anoatual, sizeof (anoatual), stdin);
        printf ("\n 4 - SAIR\n");
        scanf("%d", &op);
        break;
    }while(op!=0);
}
void remover(){

}
void consultar(){

}
void sair (){
}
 
