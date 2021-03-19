//Dato un file numeri.txt contenente valori interi e un valore intero N inserito dall’utente, memorizzare i valori contenuti nel file minori di N in un nuovo file minori.txt e quelli maggiori in un nuovo file maggiori.txt.
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int valore;
    //Creazione file
    ofstream Maggiori("maggiori.txt");
    ofstream Minori("minori.txt");
 
    cout << "Inserire un valore intero: ";
    cin >> valore;

    string filename("numeri.txt");
    int number;

    ifstream input_file(filename);

    while (input_file >> number) {
        if (number>valore){
            Maggiori << number << endl;
        }
        else if (number<valore)
        {
            Minori << number << endl;
        }
        
    }
    input_file.close();

    Maggiori.close();
    Minori.close();

    return 0;
}