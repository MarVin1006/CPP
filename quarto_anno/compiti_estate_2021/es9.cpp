/*
Il programma simula un gioco a scelta tra battaglia navale e Mastermind.
*/
#include <iostream>
#include "Battleship.cpp"
#include "Mastermind.cpp"
using namespace std;

int main()
{
	short int scelta;
	do{
		cout << "Scegliere un gioco" << endl << "Digitare '1' per battaglia navale" << endl << "Digitare '2' per Mastermind" << endl;
		cin >> scelta;
	}while (scelta < 1 && scelta > 2);
	if (scelta == 1){
		cout << "Gioco scelto: Battaglia navale" << endl << endl;
		Battleship();
	}
	else{
		cout << "Gioco scelto: Mastermind" << endl << endl;
		Mastermind();
	}
return 0;
}