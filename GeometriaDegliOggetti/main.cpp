///Rettangoli infami
#include <iostream>

using namespace std;

class Rettangolo {
    private: int lato_minore, lato_maggiore;
    public: Rettangolo(int lmin, int lmag){
        lato_minore=lmin;
        lato_maggiore=lmag;
    }
    public: int getArea() {return lato_minore * lato_maggiore;}
    public: void presentazione() {cout << "Sono un rettangolo paranormale di area " << lato_minore << " * " << lato_maggiore << " = " << getArea() << endl;}
};

int main()
{
    Rettangolo r1(10,15);
    Rettangolo r2(20,32);
    r1.presentazione();
    r2.presentazione();
    return 0;
}
