//Programma incompleto
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