#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

enum Status {CARA, COROA};
int jogar(Status);

int main(){
    Status coin;
    int jogo[1];
    
    for (int i = 0; i < 2; i++){
        jogo[i] = jogar(coin);
    }

    if(jogo[0] == jogo[1]){
        cout << "Jogador: GANHA" << endl;
    } else{
        cout << "Jogador: PERDE" << endl;
    }

    return 0;
}

int jogar(Status moeda){
    int jogo;

    srand(time( 0 ));
    jogo = rand() % 2;

    if(jogo == 0){
        moeda = CARA;
        cout << "Jogada: CARA" << endl;
    } else{
        moeda = COROA;
        cout << "Jogada: COROA" << endl;
    }
    
    return moeda;
}