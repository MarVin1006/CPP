//Ricerca una parola scelta dall'utente in un testo e ne conta il numero di occorrenze.
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int main()
{
    ifstream fin("Testo.txt");
    int count=0;
    char ch[20],c[20];
 
    cout<<"Inserisci una parola: ";
    gets(c);
 
    while(fin)
    {
    fin>>ch;
    if(strcmp(ch,c)==0)
    count++;
    } 
 
    cout<<"Occorrenze: "<<count;
    fin.close();

    return 0;
}