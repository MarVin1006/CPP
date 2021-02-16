#include <iostream>
#include <string>

using namespace std;

class Auto {
public:
    int tachimetro;
    string colore;
    string marchio;
    Auto (string col, string mar) {
        tachimetro = 0;
        colore = col;
        marchio = mar;
    }
    void presentati() {
        cout << marchio << " di colore " << colore;
    }
    void viaggia (int km) {
        tachimetro += km;
    }
};


class Bicicletta {
    public:
    int raggio;
    string colore;
    Bicicletta(int r, string c) {
        raggio = r;
        colore = c;
    }
    void presentati() {
        cout << "Buongiorno, sono una bici posseduta di colore " << colore << " e con le ruote " << raggio << "." << endl;
    }
};

int main()
{
    /*
    Bicicletta x(16, "verde");
    Bicicletta y(14, "rosso");

    x.presentati();
    y.presentati();
    */

    Auto x("Rosso corsa", "Ferrari");
    Auto y("Grigio Windows 98", "Mercedes");
    x.viaggia(20);
    y.viaggia(-15);

    return 0;
}
