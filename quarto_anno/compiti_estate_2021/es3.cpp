/*
Il programma simula il lancio di 3 dadi a 6 faccie e mostra se è uscito un tris o una coppia
*/
#include <iostream>
#include <time.h>
using namespace std;

int lancio(){
    return (rand() % 6) + 1;
}
int main()
{
    srand(time(NULL));
    char continua= ' ';
    int dado1, dado2, dado3;
    do{
    dado1 = lancio();
    dado2 = lancio();
    dado3 = lancio();

    cout<<"Dado 1: " << dado1 << endl <<"Dado 2: " << dado2 << endl <<"Dado 3: " << dado3 << endl;

    //Controllo tris
    if (dado1==dado2 && dado1==dado3){
        cout << "Tris" << endl;
    }
    //Controllo coppia
    else if (dado1==dado2 || dado1==dado3 || dado2==dado3){
        cout << "Coppia" << endl;
    }
    
    cout << "Imettere 'n' per smettere: ";
    cin >> continua;
    cout << endl;
    }while(continua != 'n');
    return 0;
}