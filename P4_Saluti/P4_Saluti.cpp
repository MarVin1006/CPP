#include <iostream>
using namespace std;

int main() {
    int ora;
    cout << "Inserisci l'ora attuale: ";
    cin >> ora;
    if (ora > -1 && ora < 24)
        {
        if (ora > 19 || ora < 5)
        {
            cout << "Buonanotte";
        }

        if (ora > 4 && ora < 13)
        {
            cout << "Buongiorno";
        }

        if (ora > 12 && ora < 20)
        {
            cout << "Buonasera";
        }
        }
    else
    {
        cout << "Orario invalido";
    }
    return 0;
}
