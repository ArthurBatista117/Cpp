#include<iostream>
#include<locale>
#include<cstdlib>
#include<ctime>

using namespace std;

int jogar(void);

int main(){
    setlocale(LC_ALL, "Portuguese");
    enum status {GANHOU, PERDEU, CONTINUA};
    int Mypont, sum;
    status Statusjogo;
    
    srand(time( 0 ));
    sum = jogar();

    switch (sum){
    case 7:
    case 11:
        Statusjogo = GANHOU;
        break;
    case 2:
    case 3:
    case 12:
        Statusjogo = PERDEU;
        break;
    default:
        Statusjogo = CONTINUA;
        Mypont = sum;
        wcout << L"O ponto é: " << Mypont << endl;
        break;
    }

    while(Statusjogo == CONTINUA){
        sum = jogar();
        if(sum == Mypont){
            Statusjogo = GANHOU;
        } else if(Statusjogo == 2 || Statusjogo == 3 || Statusjogo == 12){
            Statusjogo = PERDEU;
        }
    }

    if(Statusjogo == GANHOU){
        cout << "GANHOU!" << endl;
    } else{
        cout << "PERDEU!" << endl;
    }

    return 0;
}

int jogar(void){
    int jogo1, jogo2, jogo_tot;
    jogo1 = 1 + rand() % 6;
    jogo2 = 1 + rand() % 6;

    jogo_tot = jogo1 + jogo2;

    cout << "Dado 1: " << jogo1 << endl;
    cout << "Dado 2: " << jogo2 << endl;
    cout << "Soma: " << jogo_tot << endl;
    
    return jogo_tot;
}