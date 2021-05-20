#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

bool Contains(int v[], int t, int x)
{
    for(int i=0; i<t; i++){
        if(v[i]==x) return false;}
    return true;
}

void Fill(int v[], int l)
{
    srand(time(NULL));
    for(int i=0; i<l; i++){
        do{v[i] = (rand() % 10);
        }while(!Contains(v,i,v[i]));
    }
}

void Attempt(int v[], int l)
{
    for(int i=0; i<l; i++){
        do{
            cout<<"Inserisci un numero: ";
            cin>>v[i];
        }while(v[i]<=0 && v[i]>=9);
    }
}

string Check(int x[], int y[], int l)
{
    string strike;
    for(int i=0; i<l; i++){
        if(x[i] == y[i]){
            strike += "*";
        }
    }
    return strike;
}

int main()
{
    int cpuarray[4], playerarray[4];
    int tentativi = 5;
    string r;
    Fill(cpuarray, 4);
    cout << "array ";
    for (int d=0; d<4; d++){
        cout << cpuarray[d];
    }
    while (tentativi > 0)
    {
        cout << endl << tentativi << " Tentativi rimanenti" << endl;
        Attempt(playerarray, 4);
        r = Check(cpuarray, playerarray, 4);
        if(r=="****"){
        break;
    }
        cout<<r;
        tentativi -= 1;
    }
    if(r=="****"){
        cout<<"Sei il campione supremo di questo gioco";
    }
    else{
        cout <<"Sei stato sconfitto da un computer...";
    }
    return 0;
}
