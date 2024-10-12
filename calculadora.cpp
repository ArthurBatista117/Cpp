#include<iostream>
#include<locale>

using namespace std;

void linha(){
    cout << "=============================================" << endl;
}

float soma(float []);
float sub(float []);
float mult(float []);
float div(float []);


int main(){
    setlocale(LC_ALL, "Portuguese");

    int solit = 5;
    char res;
    float n[2] = {0, 0}; 

    while(res != 'N' && res != 'n'){
        solit = 5;
        linha();
        wcout << L"[1]Adição" << endl;
        wcout << L"[2]Subtração" << endl;
        wcout << L"[3]Multiplicação" << endl;
        wcout << L"[4]Divisão" << endl;
        linha();
        while(solit > 4){
            cout << "=> ";
            cin >> solit;
        }
        wcout << L"Digite o 1° número: " << endl;
        cin >> n[0];
        wcout << L"Digite o 2° número: " << endl;
        cin >> n[1];

        switch(solit){
            case 1:
                cout << "Soma: " << soma(n) << endl;
                break;
            case 2:
                cout << "Subtração: " << sub(n) << endl;
                break;
            case 3:
                cout << "Multiplicação: " << mult(n) << endl;
                break;
            case 4:
                cout << "Divisão: " << div(n) << endl;
                break;
        }
        cout << "Deseja continuar: " << endl;
        cin >> res;
    }
    cout << "Fim" << endl;
    return 0;
}

float soma(float vet[]){
    return vet[0] + vet [1];
}

float sub(float vet[]){
    return vet[0] - vet [1];
}

float mult(float vet[]){
    return vet[0] * vet [1];
}

float div(float vet[]){
    return vet[0] / vet [1];
}