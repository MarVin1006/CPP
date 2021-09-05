/*
Il programma legge i primi 10 numeri nel file "numeri.txt" è ne dice quali sono ripetuti e quante volte
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    bool saltalinea[10];
    for (int i=0; i<9; i++){
        saltalinea[i] = false;
    }
    string numeri[10];
    int linea = 0;
    string num;
    ifstream NumeriTxt("numeri.txt");

    while (getline (NumeriTxt, num)){
    cout << num << endl;
    numeri[linea] = num;
    linea++;
}

    NumeriTxt.close();

    

    for(int i=0; i<9; i++){
        int ripete=0;
        if (saltalinea[i]==false){
            for(int j=0; j<9; j++){
                if(numeri[i] == numeri[j] && i!=j){
                    ripete++;
                    saltalinea[j] = true;
                }           
            }
        cout << "Il numero " << numeri[i] << " si ripete " << ripete << " volta/e" << endl;
        }
    }


    return 0;
}