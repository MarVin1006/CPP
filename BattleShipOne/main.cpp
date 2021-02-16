/*
Battaglia navale contro il computer scarso N1
Help sui codici nella mappa: 0-vuoto, 1-nave, 2-bomba, 3-strike
Autore MarVin 04/12/2020
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void initialize(int v [], int l) {
    for(int i=0; i<l; i++) v[i]=0;
}

void show(int v[], int l) {
    for (int i=0; i<l; i++)
    switch(v[i]) {
    case 0:
        cout << "~" << "\t";
        break;
    case 1:
        cout << "\\__/" << "\t";
        break;
    case 2:
        cout << "O" << "\t";
        break;
    case 3:
        cout << "X" << "\t";
        break;



    };
    cout << endl;
}

void arrange(int v[], int l) {
    srand(time(NULL));
    int n = rand() % (l-1);
    v[n] = 1;
    v[n+1] = 1;
}

bool launch(int v[], int l) {
    int p = -1;
    while (p<0 || p>l) {
        cout << "Inserire le coordinate per sganciare la bomba (1 a " << l -1 << "): ";
        cin >> p;
        p--;
    }
    if (v[p] == 0) v[p]= 2;
    if (v[p] == 1) v[p]= 3;
}

bool weWon(int v[], int l) {
    for (int i=0; i<l; i++) {
        if (v[i] == 1 ) return false;
    }
    return true;
}

int main()
{
    int num_bomb = 0;
    const int MAPLENGTH = 10;
    int map[MAPLENGTH];
    initialize(map, MAPLENGTH);
    arrange(map, MAPLENGTH);
    show(map, MAPLENGTH);
    while (true) {
        num_bomb++;
        launch(map, MAPLENGTH);
        show(map, MAPLENGTH);
        if (weWon(map, MAPLENGTH)) break;
    }
    if (num_bomb <= 3) {
        cout <<"Complimenti! Hai distrutto la flotta nemica utilizzando soltanto " << num_bomb << " bombe!" << endl;
    }
    else {
        cout <<"Hai distrutto la flotta nemica utilizzando " << num_bomb << " bombe." << endl;
    }
    return 0;
}
