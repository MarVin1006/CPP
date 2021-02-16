///Programma che definisce ed usa una classe "Cerchio".
#include <iostream>

using namespace std;

class Cerchio {
    private: float raggio;
    public: Cerchio(float rag){
        raggio=rag;
    }
    public: float getDiametro() {return raggio * 2;}
    public: void presentazione() {cout << "Sono un cerchio parlante di diametro " << raggio << " * 2" << " = " << getDiametro() << endl;}
};

int main()
{
    Cerchio r1(1.14);
    Cerchio r2(10);
    r1.presentazione();
    r2.presentazione();
    return 0;
}
