#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

bool Contains(int v[], int t, int x)
{
    for(int i=0; i<t; i++){
        if(v[i]==x) return true;
        }
    return false;
}

void Fill(int v[], int l)
{
    srand(time(NULL));
    for(int i=0; i<l; i++){
        do{v[i] = rand()%10;
        }while(!Contains(v,i,v[i]));
    }
}

void Attempt(int v[], int l)
{
    for(int i=0; i<l; i++){
        do{
            cout<<"Inserisci un numero: ";
            cin>>v[i];
        }while(v[i]>=0 && v[i]<=9);
    }
}

/*
char vuoicontinuare()
{
    char x
    do
    cout << "Vuoi continuare(S o N)? "
    cin >>
    while( x=!'s' || x=!'S' || x=!'n' || x=!'N')
}
*/

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
    Fill(cpuarray, 4);
    string fullbar;
    for(int y=0; y<4; y++){
        fullbar += "*";
    }
    while (true)
    {
        Attempt(playerarray, 4);
        string r = Check(cpuarray, playerarray, 4);
        if(r==fullbar) break;
        cout<<r;
    }
    cout<<"Bravissimo";
    return 0;
}
