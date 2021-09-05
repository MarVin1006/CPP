/*
Il programma chiede all'utente di inserire un anno e verifica se tale anno è bisestile
*/
#include <iostream>
using namespace std;

void CalcoloAnno(int vanno)
{
    cout << "Inserire l'anno da calcolare: ";
    cin >> vanno;
    if (vanno%4 == 0)
    {
        if (vanno%100 != 0)
        {
            cout << "l'anno " << vanno << " e' bisestile" << endl;
        }
        else if (vanno%400 == 0)
        {
            cout << "l'anno " << vanno << " e' bisestile" << endl;
        }
        else
        {
            cout << "l'anno " << vanno << " non e' bisestile" << endl;
        }
        
    }
    else
    {
        cout << "l'anno " << vanno << " non e' bisestile" << endl;
    }
}

int main()
{
    int anno;
    bool continuare;
    char risposta;
    cout << "Calcolatore anno bisestile" << endl;
    do
    {
        continuare = false;
        CalcoloAnno(anno);
        cout << "Vuoi continuare? digitare 's' per continuare: ";
        cin >> risposta;
        if(risposta == 's')
        {
            continuare = true;
        }
    }while (continuare==true);
    return 0;
}