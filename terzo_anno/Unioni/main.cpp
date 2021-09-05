#include <iostream>
#include <string>

using namespace std;

union bandiera
{
    int colore1, colore2;
}

bo, ro;

int main()
{
    bo.colore1 = 1;
    bo.colore2 = 2;
    ro=bo;
    cout<<ro.colore2<< endl;
    cout << bo.colore1;
}
