#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int numero = 1;
    //Creazione file
    ofstream myPositivi("positivi.txt");
    ofstream myNegativi("negativi.txt");
    while (numero !=0 )
    {
        cout << "Digitare un numero intero (0 per fermarsi): ";
        cin >> numero;
        if (numero > 0){
            myPositivi << numero << endl;
        }
        else if (numero < 0){
            myNegativi << numero << endl;
        }
    }
    myPositivi.close();
    myNegativi.close();

    return 0;
}