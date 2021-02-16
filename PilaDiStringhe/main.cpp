///Le pile di stringhe
#include <iostream>
#include <string>
//La pila usa la politica LIFO (Last In-First Out)
using namespace std;

class Pila {
public:
    int d=9000, p=0;
    string dati[9000];
    Pila(){}

    void push(string e)
    {
        dati[p]=e;
        p++;
    }

    string pop()
    {
        p--;
        return dati[p];
    }
};

int main()
{
    Pila p;
    string testo;
    int contatore = 0;
    while (true) {
        cout << "Inserisci un testo (digita basta per smettere): ";
        cin >> testo;
        if (testo == "basta") {
                break;
        }
        p.push(testo);
        contatore++;
        }
    for(int j=0; j<contatore; j++){
        cout << p.pop() << endl;
    }
    return 0;
}
