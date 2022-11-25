#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <String.h>
#include <locale.h>

//Função para login
int login(int value_login){
    char user_login[30];
    int result_login;
    system("cls");
    printf("\n\nEntre com a sua conta:\n");
    printf("\nLogin: ");
    scanf("%s",&user_login);
    result_login = strcmp(user_login, "angelica");
    return result_login;
}

//Função para a senha
int password(int value_password){
    char user_password[20];
    int result_password;
    printf("Senha: ");
    scanf("%s",&user_password);
    result_password = strcmp(user_password, "1234");
    return result_password;
}

//Função Principal
int main(){
    setlocale(LC_ALL, "Portuguese");
    int value_login, value_password, cont, cont_points, nav_login;
    printf("\n---------------- Sistema de Login ------------------\n\n");
    printf("Você deseja navegar em sua conta? [1 - Sim/ 2 - Não] - ");
    scanf("%d",&nav_login);
    if (nav_login == 1){
        printf("\n\nRedirecionando para a tela de login ");
        cont_points = 0;
        //Laço para o carregamento
        while(cont_points < 3){
            sleep(1);
            printf(" . ");
            sleep(1);
            cont_points++;
        }
        printf("\n");
        if(login(value_login) == 0 && password(value_password) == 0){
            system("cls");
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
        getchar();

            for(cont_points=0;cont_points<3;cont_points++){
                sleep(1);
                printf(" . ");
                sleep(1);
            }
            //chamando a função ao qual estará a conta do usuário
            system_logged();
        }
        //Erro a senha ou o login :(
        else{
            system("cls");
            printf("\nNão foi possível entrar na sua conta!\nLogin ou senha incorretos!\n\nAperte qualquer tecla para sair...\n\n");
        }
    }
    else{
        //O usuário escolheu navegar no sistema sem estar logado
        if(nav_login == 2){
            printf("\nVocê escolheu navegar sem login no sistema, aguarde um momento");
            for(cont_points=0;cont_points<3;cont_points++){
                sleep(1);
                printf(" . ");
                sleep(1);
            }
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

        getchar();

        }
    }

}

//Sistema já logado
void system_logged(){
    system("cls");

}
