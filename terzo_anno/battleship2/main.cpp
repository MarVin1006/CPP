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

void print(bool showships)
{
    for(int i=0; i<LEN; i++){cout << i <<" ";} cout << endl;
    for(int i=0; i<LEN; i++){cout << "--";} cout << endl;
    for(int i=0; i<LEN; i++){
        for(int j=0; j<LEN; j++){
            if (showships==true){
            cout<< bf[i][j] << ' ';
            }
            else{
                if (bf[i][j] == 'X')
                {
                    cout << bf[i][j];
                }
                else{
                    cout << " ";
                }
                cout << " ";
            }
        }
        cout << i << endl;
    }
    for(int i=0; i<LEN; i++){cout << "--";} cout << endl;
}

void hship(int l)
{
    int randl=l-rand()%l+1;
    int row=rand()%LEN;
    int column=rand()%(LEN-randl);
    cout << "riga= "<<row<<" colonna= "<<column<<endl;
    for (int i=column; i<column+randl; i++){
        if(i==column){
            bf[row][i]='<';
        }
    else if (i==column+randl-1){
        bf[row][i]='>';
        }
    else{
        bf[row][i]='-';
        }
    }
}

void vship(int l)
{
    int randl=l-rand()%l+1;
    int row=rand()%(LEN-randl);
    int column=rand()%LEN;
    cout << "riga= "<<row<<" colonna= "<<column<<endl;
    for (int i=row; i<row+randl; i++){
        if(i==row){
            bf[i][column]='^';
        }
    else if (i==row+randl-1){
        bf[i][column]='v';
        }
    else{
        bf[i][column]='|';
        }
    }
}


void shipgen(int maxlen, int shipquantity){
    for (int i=0; i<shipquantity; i++){
    if (rand()%2 == 0){
        vship(maxlen);
    }
    else{
        hship(maxlen);
    }
    }
}

bool IsAShip(char m){
    if (m || '<' || '>' || '-' || '^' || 'v' || '|')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool checkships(){
    for(int i=0; i<LEN; i++){
        for(int j=0; j<LEN; j++){
            if (bf[i][j] == IsAShip(bf[i][j])){
            return false;
            }
        }
    }
    return true;
}

void strike()
{
    int x, y;
    do
    {
    cout << "Inserisci le coordinate" << endl << "X Y" << endl;
    cin >> x, y;
    }
    while((x>LEN || y<0) || (y>LEN || y<0));
}

int main()
{
    
    bool showships = true;
    bool win = checkships();
    srand(time(NULL));
    clear();
    cout<<"Programma BattleShip2 in esecuzione"<<endl;
    shipgen(4, 5);
    print(showships);
    strike();


    return 0;
}
