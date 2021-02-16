/*
 *Programma magnifico.cpp
 *Che c***o sono le matrici?
 *Autore: MarVin
 *Data: 11/12/2020
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cars[4] = { "Ferrari", "Lamborghini", "Mclaren", "Bugatti" };

    cout << cars[0] << endl;

    for (int i=0; i<7; i++) {
        cout << cars[0][i] << endl;
    }
    string s = cars[0];
    return 0;
}
