#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int LEN=10;

void mostraVettore(int vet[]){
        for (int i=0; i<LEN; i++){
        cout << vet[i]<< "-";
    }
    cout << endl;
}

int main()
{
    int x, temp;
    srand(time(NULL));
    int lista[LEN];
    cout << "Riempire il vettore automaticamente? (inserire 1 per confermare): ";
    cin >> x;
    cout << endl;
    if (x==1){
        for (int j=0; j<LEN; j++){
            lista[j] = (rand() % 100) + 1;
        }
    }
    else
    {
        int valore;
        for (int j=0; j<LEN; j++){
            cout << "Inserisci il " << j+1 << "* valore: ";
            cin >> valore;
            lista[j] = valore;
        }
    }

    mostraVettore(lista);

    cout << "Ordinare il vettore in verso decrescente? (digitare 1 per confermare): ";
    cin >> x;
    int conta = 0;
    if (x != 1){
            bool scambiato=true;
            while (scambiato==true){
                scambiato = false;
                for(int j=0;j<LEN-1;j++)
                    for(int i=0;i<LEN-1;i++)
                    if(lista[i]>lista[i+1])
                    {
                        temp=lista[i];
                        lista[i]=lista[i+1];
                        lista[i+1]=temp;
                        scambiato = true;
                        conta++;
                    }
                }
            }

    else{
            bool scambiato=true;
            while (scambiato==true){
                scambiato = false;
                for(int j=0;j<LEN-1;j++)
                    for(int i=0;i<LEN-1;i++)
                    if(lista[i]<lista[i+1])
                    {
                        temp=lista[i];
                        lista[i]=lista[i+1];
                        lista[i+1]=temp;
                        scambiato = true;
                        conta++;
                        }
                }
            }

    mostraVettore(lista);
    cout << endl << "Scambi totali= " << conta;

    return 0;
}
