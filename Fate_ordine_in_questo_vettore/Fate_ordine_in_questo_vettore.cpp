#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int generalista(int rmin, int rmax)
{
    srand(time(NULL));
    int i;
    for(i = rmin; i < rmax; i++){
        return (rand() % 10) + 1;
    }
}

int ordina(int lst<int>, int rmin, int rmax)
{
    int nmin = rmax + 1, i;
    for(i = rmin; i < rmax; i++){
        if (nmin < lst[i]){

            nmin = lst[i];
        }
        return nmin;
    }
}

int main()
{
    int lista[100];
    lista[1] = generalista(0, 100);
    cout << lista[1] << endl << endl;
    cout << ordina(lista[1], 0, 100);







}
