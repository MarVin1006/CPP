#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int numero = 1;
    //Creazione file
    ofstream myFile("multipli5.txt");
    while (numero !=0 )
    {
        cout << "Digitare un numero intero (0 per fermarsi): ";
        cin >> numero;
        if (numero != 0 && numero%5 == 0){
            myFile <<numero<<endl;
        }
    }
    myFile.close();

    return 0;
}