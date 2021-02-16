//Programmino di un negozio destinato a fallire
#include <iostream>
using namespace std;

int main() {
    float prezzoi = -1;
    float sconto = -1;
    float prezzo;

    while (prezzoi < 0)
    {
    cout << "Benvenuto al Negozio Gentile! (Inserisci il prezzo): ";
    cin >> prezzoi;
    if (prezzoi < 0)
        {
        cout << "Noi siamo un negozio gentile, non cattivo." << endl;
        }
    }

    while (sconto < 0)
    {
    cout << "Qui al Negozio Gentile puoi sceglierti uno sconto! (Inserisci lo sconto): ";
    cin >> sconto;
    if (sconto < 0)
        {
        cout << "Il negozio di fronte fa cosi', non noi!" << endl;
        }
    }

    prezzo = (sconto*prezzoi)/100;
    cout << "Hai uno sconto di " <<prezzo<<" euro!" << endl << "In totale devi pagare " << prezzoi - prezzo <<" euro!";
}
