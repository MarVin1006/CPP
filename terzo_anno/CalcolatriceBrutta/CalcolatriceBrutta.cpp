#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    char r{'r'};

     do{
        while(r == 'r' && r != '+' && r != '-' && r != '*' && r != '/'){
        cout << endl << "Inserisci la prima cifra: ";
        cin >> n1;
        cout << endl << "Inserisci la seconda cifra: ";
        cin >> n2;
        r = 'a';
        }

        cout << endl << "Inserisci il tipo di operazione " << endl << "('+', '-', '*', '/', 'r' per reimpostare i numeri, 'x' per uscire): ";
        cin >> r;
        switch (r) {
            case '+':
                cout << endl << n1 << " + " << n2 << " = " << n1 + n2;
                break;
            case '-':
                cout << endl << n1 << " - " << n2 << " = " << n1 - n2;
                break;
            case '*':
                cout << endl << n1 << " * " << n2 << " = " << n1 * n2;
                break;
            case '/':
                cout << endl << n1 << " / " << n2 << " = " << n1 / n2;
                break;
                }
     }
     while(r != 'x');

     return 0;
    }

