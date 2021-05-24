#include <iostream>
using namespace std;

const int LEN=10;

void print(char m[LEN][LEN])
{
    for(int i=0; i<LEN; i++){
        for(int j=0; j<LEN; j++){
            m[i][j]={'o'};
            cout<< m[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    char bf[LEN][LEN];
    cout<<"Programma BattleShip2 in esecuzione"<<endl;
    print(bf);

    return 0;
}