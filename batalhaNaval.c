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
    int navio1[2][3] = {{2,3,4}, {0,0,0}};
    int navio2[2][3] = {{0,0,0}, {2,3,4}};
    int navio3[2][3] = {{5,6,7}, {2,3,4}};
    int navio4[2][3] = {{2,3,4}, {7,6,5}};
    int erro = 0;
    /*
        Inicio de Verificações das Coordenadas dos Navios no Tabuleiro.
    */    
    /*
        Se o Primeiro Navio exceder o Tabuleiro o Usuário será alertado.
    */   
    if((navio1[0][0] + 3) > 10){
        printf("Não foi possível continuar, as coordenadas do primeiro navio excedem o tamanho do tabuleiro.\n");
        erro = 1;
    }
    /*
        Se o Segundo Navio exceder o Tabuleiro o Usuário será alertado.
    */
    else if((navio2[1][0] + 3) > 10){
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
        Verifica a Posição dos Navios no Tabuleiro e se estão se sobrepondo.
    */
    if(!erro){
        for(int x = 0; x < 10; x++){
            for(int y = 0; y < 10; y++){
                for(int i = 0; i < 3; i++){
                    /*
                        Verifica a posição do Primeiro Navio.
                    */
                    if((x == navio1[0][i]) && y == (navio1[1][i])){
                        if(tabuleiro[x][y] == 3){
                            printf("O Primeiro Navio está sobrepondo algum Navio, altere suas coordenadas.\n");
                            erro = 1;
                            y, x = 10;                            
                            break;
                        }else{
                            tabuleiro[x][y] = 3;                      
                        }
                    }
                    /*
                        Verifica a posição do Segundo Navio.
                    */
                    else if((x == navio2[0][i]) && y == (navio2[1][i])){
                        if(tabuleiro[x][y] == 3){
                            printf("O Segundo Navio está sobrepondo algum Navio, altere suas coordenadas.\n");
                            erro = 1;
                            y, x = 10;
                            break;
                        }else{
                            tabuleiro[x][y] = 3;                     
                        }
                    }
                    /*
                        Verifica a posição do Terceiro Navio.
                    */
                    else if((x == navio3[0][i]) && y == (navio3[1][i])){
                        if(tabuleiro[x][y] == 3){
                            printf("O Terceiro Navio está sobrepondo algum Navio, altere suas coordenadas.\n");
                            erro = 1;
                            y, x = 10;
                            break;
                        }else{
                            tabuleiro[x][y] = 3;                     
                        }
                    }
                    /*
                        Verifica a posição do Quarto Navio.
                    */
                    else if((x == navio4[0][i]) && y == (navio4[1][i])){
                        if(tabuleiro[x][y] == 3){
                            printf("O Quarto Navio está sobrepondo algum Navio, altere suas coordenadas.\n");
                            erro = 1;
                            y, x = 10;
                            break;
                        }else{
                            tabuleiro[x][y] = 3;                       
                        }
                    }
                }  
            }
        }
    }
    /*
        Exibição do Tabuleiro no Terminal.
    */
    if(!erro){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }
}
