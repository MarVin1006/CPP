#include <iostream>
#include <time.h>
using namespace std;

const int LEN=10;
char bf[LEN][LEN];

void clear(){
    for (int i=0; i<LEN; i++){
        for (int j=0; j<LEN; j++){
            bf[i][j]=' ';
        }
    }
}

void print()
{
    for(int i=0; i<LEN; i++){cout << "--";} cout << endl;
    for(int i=0; i<LEN; i++){
        for(int j=0; j<LEN; j++){
            cout<< bf[i][j] << ' ';
        }
        cout << endl;
    }
    for(int i=0; i<LEN; i++){cout << "--";} cout << endl;
}

void ship(int l){
    int row=rand()%LEN;
    int column=rand()%(LEN-l);
    cout << "riga= "<<row<<" colonna= "<<column<<endl;
    for (int i=column; i<column+l; i++){
        bf[row][i]='X';
    }

}

int main()
{
    srand(time(NULL));
    clear();   
    cout<<"Programma BattleShip2 in esecuzione"<<endl;
    ship(3);
    ship(4);
    ship(7);
    print();

    return 0;
}