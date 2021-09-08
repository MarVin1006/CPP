/*
Il programma genera una matrice 4x4 di numeri casuali e ne trova la somma più alta.
*/
#include <iostream>
#include <time.h>
using namespace std;

void riempiMatrice(int matrice[4][4]) {
    for (int r=0; r<4; r++) {
        for (int c=0; c<4; c++) {
            matrice[r][c] = (rand() % 100) + 1;
        }
    }

}

void stampaMatrice(int matrice[4][4]){
	for (int r=0; r<4; r++) {
    	for (int c=0; c<4; c++) {
			if (c<3){
        		cout << matrice[r][c] << " - ";
				}
				else{
				cout << matrice[r][c];
				}
    		}
	    cout << endl;
    }
	cout << endl;
}

void sommaMatrici(int matrice1[4][4], int matrice2[4][4], int matricesomma[4][4]){
	for (int r=0; r<4; r++){
		for (int c=0; c<4; c++){
			matricesomma[r][c]=matrice1[r][c]+matrice2[r][c];
		}
	}
}

int main()
{
	srand(time(NULL));
	int matrice[4][4], matricedue[4][4], matricesomma[4][4];
	riempiMatrice(matrice);
	cout << "Matrice 1" << endl;
	stampaMatrice(matrice);

	riempiMatrice(matricedue);
	cout << "Matrice 2" << endl;
	stampaMatrice(matricedue);

	sommaMatrici(matrice, matricedue, matricesomma);
	cout << "Somma delle matrici" << endl;
	stampaMatrice(matricesomma);

return 0;
}