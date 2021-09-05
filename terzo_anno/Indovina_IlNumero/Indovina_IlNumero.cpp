#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int generanumero(){
    srand(time(NULL));
    return (rand() % 10) + 1;
}


int main()
{
    int num;
    int numutente;
    int tentativi;
    num = generanumero();
    tentativi = 3;
        do{
            cout << "Indovina il numero (da 1 a 10): ";
            cin >> numutente;

            if (num == numutente){
                cout << "Complimenti hai indovinato il numero!" << endl;
                break;
            }
            else{
                tentativi = tentativi - 1;
                cout << "Numero errato!" << endl << "Tentativi rimanenti = " << tentativi << endl;
                }
            }
        while (tentativi > 0);
}
