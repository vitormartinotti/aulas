#include<bits/stdc++.h>
#define linhas 100
#define colunas 100

using namespace std;

int m[linhas][colunas];

int main(){
    /*
    IDEIA: Utilizar vetores auxiliares para percorrer
    as casas vizinhas de uma célula da matriz.
    O conteúdo do vetor dx representará um movimento na direção do eixo x,
    enquanto dy no eixo y. (CUIDADO: Uma alteração no eixo x representa
    um movimento nas colunas da matriz, enquanto no eixo y nas linhas)
    */

    //Truque para visitar os vizinhos laterais de uma célula da matriz m:
    //Suponha que estamos na célula m[y][x] de uma matriz.
    int dx = {0, 1, 0, -1};
    int dy = {-1, 0, 1, 0};

    for(int k = 0; k < 4; k++){
        int nx = x + dx[k];
        int ny = y + dy[k];

        if(nx < 0 || nx > colunas) continue; //Checa se a nova coordenada x (nx) passar dos limites do tabuleiro
        if(ny < 0 || ny > linhas) continue;  //Análogo ao anterior

        /*
        Se chegar até aqui, estamos na célula m[ny][nx].
        Aqui vai o seu código.
        */
    }

    //Truque para visitar todos os vizinhos ao redor da matriz m:
    //Suponha que estamos na célula m[y][x] de uma matriz.
    int dx = {-1, 0, 1, 1, 1, 0, -1, -1};
    int dy = {-1, -1, -1, 0, 1, 1, 1, 0};

    for(int k = 0; k < 8; k++){
        int nx = x + dx[k];
        int ny = y + dy[k];

        if(nx < 0 || nx > colunas) continue; //Checa se a nova coordenada x (nx) passar dos limites do tabuleiro
        if(ny < 0 || ny > linhas) continue;  //Análogo ao anterior

        /*
        Se chegar até aqui, estamos na célula m[ny][nx].
        Aqui vai o seu código.
        */
    }

    //Truque para visitar todos as células que estão a uma ditância p de m[y][x]:
    //Suponha que estamos na célula m[y][x] de uma matriz.
    int dx = {-1, 0, 1, 1, 1, 0, -1, -1};
    int dy = {-1, -1, -1, 0, 1, 1, 1, 0};

    for(int k = 0; k < 8; k++){
        int nx = x + p*dx[k]; //dx e dy apenas dão a direção, esta é multiplicada por p para acessar a célula desejada
        int ny = y + p*dy[k];

        if(nx < 0 || nx > colunas) continue; //Checa se a nova coordenada x (nx) passar dos limites do tabuleiro
        if(ny < 0 || ny > linhas) continue;  //Análogo ao anterior

        /*
        Se chegar até aqui, stamos na célula m[ny][nx].
        Aqui vai o seu código.
        */
    }
