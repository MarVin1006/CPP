#include <iostream>
using namespace std;

int main()
{
    char r{'s'};

    while (r == 's')
    {
     cout << "Hello world." << endl << "Vuoi continuare ? " << endl;

     do
     {
     cout << "(digita 's' per continuare o digita 'n' per smettere): ";
     cin >> r;
     cout << endl;
     if(r != 's' && r != 'n')
        {
            cout << "Valore invalido" << endl;

        }
     }
     while(r != 's' && r != 'n');



    }

    return 0;
}
