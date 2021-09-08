/*
Il programma genera una matrice 4x4 di numeri casuali e ne trova la somma più alta.
*/
#include <iostream>
#include <time.h>
using namespace std;

void riempiSommeMatrice(int matrice[4][4]) {
    srand(time(NULL));
	int somma[4];
	int max=0;
	for (int z=0; z<4; z++){
		somma[z]=0;
	}
    for (int r=0; r<4; r++) {
        for (int c=0; c<4; c++) {
            matrice[r][c] = (rand() % 100) + 1;
        }
    }
	for (int r=0; r<4; r++) {
    	for (int c=0; c<4; c++) {
			somma[r]+=matrice[r][c];
			if (c<3){
        		cout << matrice[r][c] << " - ";
				}
				else{
				cout << matrice[r][c] << " = " << somma[r];
				}
    		}
	    cout << endl;
    }
	for (int i=0; i<4; i++){
		if (max<somma[i]){
			max=somma[i];
		}
	}
	cout << endl << "La somma piu' alta e' " << max;
}

int main()
{
	int matrice[4][4];
	riempiSommeMatrice(matrice);
return 0;
}