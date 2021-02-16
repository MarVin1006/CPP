//Programmino che ti dice il giorno della settimana inserendo un numero
#include <iostream>
using namespace std;
int main()
    {
    float prezzoi = -1;
    int sconto = -1;
    float prezzo;

    while (prezzoi < 1)
    {
    cout << "Inserisci il prezzo: ";
    cin >> prezzoi;
    if (prezzoi < 1)
        {
        cout << "Valore invalido" << endl;
        }
    }

        int visitatore = 0;
        while (visitatore < 1 or visitatore > 5)
        {
            cout << "1 Studente" << endl
            << "2 Pensionato" << endl
            << "3 Cittadino residente nel comune di Bologna" <<endl
            << "4 Diversamente abile" << endl
            << "5 Visitatore generico" << endl
            << "Chi sei? ";
            cin >> visitatore;
        }

        switch(visitatore)
        {
            case 1: cout << "Sconto 50%";
            sconto = 50; break;
            case 2: cout << "Sconto 30%";
            sconto = 30; break;
            case 3: cout << "Sconto 25%";
            sconto = 25; break;
            case 4: cout << "Entrata gratis";
            sconto = 100; break;
            case 5: cout << "Prezzo intero";
            sconto = 0; break;
        }

            prezzo = (sconto*prezzoi)/100;
            cout << endl << endl << "Hai uno sconto di " <<prezzo<<" euro" << endl << "In totale devi pagare " << prezzoi - prezzo <<" euro." << endl;


    }
