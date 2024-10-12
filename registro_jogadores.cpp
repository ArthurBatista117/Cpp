#include<iostream>
#include<locale>
#include<cstring>

using namespace std;

struct jogador{
    char nome[80];
    unsigned gols;
};

struct equipe{
    jogador a[22];
};

void linha();

int main(){
    setlocale(LC_ALL, "Portuguese");

    char res = 'S';
    equipe santos;

    linha();
    cout << "C A D A S T R O " << endl;
    linha();

    int i = 0;
    while(res != 'N' && res != 'n'){
        jogador j; 
        cout << "Digite o nome do jogador: " << endl;
        cin.ignore();
        cin.getline(j.nome, 80); 

        wcout << L"Digite o número de gols: " << endl;
        cin >> j.gols;

        santos.a[i] = j;

        cout << "Deseja continuar? ";
        cin >> res;

        i++; 
    }

    linha();
    for(int c=0; c<i; c++){
        cout << santos.a[c].nome << endl;
    }
    return 0;
}

void linha(){
    cout << "==========================================" << endl;
}