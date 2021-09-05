#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //Creazione file
    ofstream myFile("prova.txt");
    myFile <<"Prima frase"<<endl;
    myFile<<"Frase numero 2"<< endl;
    myFile<<"Modifica 4 apportata!"<< endl;
    myFile<<"Adesso chiudo il file..."<<endl;
    myFile.close();

    //Spiamo i file
    string s;
    ifstream myFile2("prova.txt");
    while (getline(myFile2, s)){
        cout << s;
        cout<< endl;
    }
    myFile2.close();

    return 0;
}