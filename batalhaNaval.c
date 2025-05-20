#include <stdio.h>

int main(){
    /*
        Inicialização do Tabuleiro.
    */
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
    };

    /*
        Inicio das Coordenadas dos Navios.
    */
    int navio1[3] = {2,3,4};
    int navio2[3] = {2,3,4};
    int erro = 0;
    /*
        Inicio de Verificações das Coordenadas dos Navios no Tabuleiro.
    */    
    /*
        Se o Primeiro Navio exceder o Tabuleiro o Usuário será alertado.
    */   
    if((navio1[0] + 3) > 10){
        printf("Não foi possível continuar, as coordenadas do primeiro navio excedem o tamanho do tabuleiro.\n");
        erro = 1;
    }
    /*
        Se o Segundo Navio exceder o Tabuleiro o Usuário será alertado.
    */
    else if((navio2[0] + 3) > 10){
        printf("Não foi possível continuar, as coordenadas do segundo navio excedem o tamanho do tabuleiro.\n");
        erro = 1;
    }
    /*
        Se os Navios estiverem se sobrepondo o Usuário será alertado.
    */
    if(navio1[0] == 0 && navio2[0] == 0){
        printf("Os Navios estão se sobrepondo, mude as coordenadas de algum Navio.");
        erro = 1;
    }

    /*
        Exibição do Tabuleiro no Terminal.
    */
    if(!erro){
        for(int x = 0; x < 10; x++){
            for(int y = 0; y < 10; y++){
                int encontrado = 0;
                /*
                    Verifica a posição do Primeiro Navio no Tabuleiro.
                */
                if(y == 0){
                    for(int i = 0; i < 3; i++){
                        if(x == navio1[i]){
                            printf("3 ");
                            encontrado = 1;
                        }
                    }
                }
                /*
                    Verifica a posição do Segundo Navio no Tabuleiro.
                */
                if(x == 0){
                    for(int i = 0; i < 3; i++){
                        if(y == navio2[i]){
                            printf("3 ");
                            encontrado = 1;
                        }
                    }               
                }
                /*
                    Caso nenhum Navio esteja ocupando esta posição, colocará como Água.
                */
                if(encontrado == 0){
                    printf("0 ");
                }
            }printf("\n");
        }
    }
}
