///Le pile (non energetiche)
#include <iostream>
//La pila usa la politica FIFO (First In-First Out)
using namespace std;

class Pila {
public:
    int d=100, dati[100], p=0;
    Pila(){}

    void push(int e)
    {
        dati[p]=e;
        p++;
    }

    int pop()
    {
        p--;
        return dati[p];
    }
};

int main()
{
    Pila p;
    p.push(33);
    p.push(11);
    p.push(87);
    cout << p.pop() << endl;
    cout << p.pop() << endl;
    cout << p.pop() << endl;
    return 0;
}
