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
    cout<<"Inserisci i numeri: ";
    for(int i=0; i<l; i++){
        do{
            cin>>v[i];
        }while(v[i]<=0 && v[i]>=9);
    }
}

string Check(int x[], int y[], int l)
{
    string strike = "";
    bool match;
    for(int i=0; i<l; i++){
        match = false;
        if(x[i] == y[i]){
            strike += "x";
            match = true;
        }
        else{
                for(int g=0; g<l; g++){
                    if(y[i] == x[g] && i!=g){
                    strike += "o";
                    match = true;
                    }
                }
        }
        if(match==false){
            strike += "-";
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
        if(r=="xxxx"){
        break;
    }
        cout<<r;
        tentativi -= 1;
    }
    if(r=="xxxx"){
        cout<<"Sei il campione supremo di questo gioco";
    }
    else{
        cout << endl << "Sei stato sconfitto da un computer...";
    }
    return 0;
}
