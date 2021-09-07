/*
Il programma legge una stringa e trasforma le lettere minuscole in maiuscole e viceversa.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string stringa;
    cout<<"Inserisci dei caratteri: ";
    getline(cin, stringa);
	for(int i=0; stringa[i] != '\0'; i++)
	{
		if (stringa[i] >= 65 && stringa[i] <= 90 )
			stringa[i] = stringa[i] + 32;
		else if (stringa[i] >= 97 && stringa[i] <= 122 )
		    stringa[i] = stringa[i] - 32;
	}
	
	cout<<"Risultato: "<< stringa;
return 0;
}