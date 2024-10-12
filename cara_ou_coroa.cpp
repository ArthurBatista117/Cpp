#include<iostream>
#include<locale>
#include<cstdlib>
#include<ctime>

using namespace std;

int jogar(void);

int main(){
    setlocale(LC_ALL, "Portuguese");
    enum Status {CARA, COROA};
    Status moeda1;
    Status moeda2;
    int jogo;
    
    srand(time( 0 ));
    jogo = jogar();

    if(jogo == 0){
        moeda1 = CARA;
        cout << "Moeda: CARA" << endl;
    } else if(jogo == 1){
        moeda1 = COROA;
        cout << "Moeda: COROA" << endl; 
    }
    
    srand(time( 0 ));
    jogo = jogar();

    if(jogo == 0){
        moeda2 = CARA;
        cout << "Moeda: CARA" << endl;
    } else if(jogo == 1){
        moeda2 = COROA;
        cout << "Moeda: COROA" << endl; 
    }

    if(moeda1 == moeda2){
        cout << "Jogador ganhou!" << endl;
    } else{
        cout << "Jogador perdeu!" << endl;
    }
    return 0;
}

int jogar(void){
    int jogo;

    jogo = 1 + rand() % 2;

    return jogo;
}