/*
Il programma stampa una frase se l'utente indovina la password preimpostata nel codice.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pass="errata", userguess;
    do{
    cout<<"Imettere la password: ";
    cin >> userguess;

    //Controllo password
    if (pass==userguess){
        cout << "La frase nascosta e' 'Bravo, hai scoperto la password senza guardare il codice?'";
    }
    //Risposta di errore
    else{
        cout << "La password e' errata" << endl;
    }
    }while(pass!=userguess);
    return 0;
}