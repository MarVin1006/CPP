#include <iostream>

using namespace std;

void stampaVettore(int v[], int l){
    for (int i = 0; i < l; i++){
        cout << v[i] << "\t";
    }
}

int main()
{
    int x[10];
    for (int i = 0; i < 10; i++){
        x[i] = i + 1;
    }
    stampaVettore(x, 10);
    return 0;
}
