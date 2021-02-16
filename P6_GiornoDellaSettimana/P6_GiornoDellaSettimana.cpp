//Programmino che ti dice il giorno della settimana inserendo un numero
#include <iostream>
using namespace std;
int main()
    {
        int giorno = 0;
        while (giorno < 1 or giorno > 7)
        {
            cout << "Inserisci un numero tra 1 e 7: ";
            cin >> giorno;
        }

        switch(giorno)
        {
            case 1: cout << "Buona fortuna"; break;
            case 2: cout << "Buon martedi"; break;
            case 3: cout << "Buon mercoledi"; break;
            case 4: cout << "Buon giovedi"; break;
            case 5: cout << "Buon venerdi"; break;
            case 6: cout << "Buon sabato"; break;
            case 7: cout << "Buona domenica"; break;

        }


    }
