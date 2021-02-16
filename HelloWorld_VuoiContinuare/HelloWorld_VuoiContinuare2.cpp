#include <iostream>
using namespace std;

bool vuoiContinuare()
{
    char c;
    do {
        cout << "Vuoi continuare? (s/n): ";
        cin >> c;
        cout << endl;
    } while (c != 's' && c != 'n');

    return (c == 's');
}

int main()
{
    do{
        cout << "Hello world." << endl;
    }while (vuoiContinuare());

    return 0;
}
