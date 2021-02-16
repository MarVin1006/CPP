/*
    pila.cpp
    Author:Marco Tallarino
    Date:15-01-2021
*/
#include <iostream>
#include <string>
using namespace std;

class Pila{
    public:
    string dati[100];
    int cima=0;

    void push(string elemento){
        dati[cima]=elemento;
        cima++;
    }

    string pop(){
        if (cima==0){
            cout << "Errore: Operazione pop su una pila vuota" << endl;
            return "";
        }
        return dati[--cima];
    }
};
char* my_to_string(int value){
    char* buffer;// char buffer[100]
    buffer= new char[100];
    sprintf(buffer,"%d");
    return buffer;

}
int main()
{
    Pila p;

    for (int i=0; i<50; i++){
        p.push(my_to_string(i));
    }
    p.push("ciao");
    cout<< p.pop() << endl;
    cout<< p.pop() << endl;
    cout<< p.pop() << endl;
    cout<< p.pop() << endl;

    int x=33;
    cout<< x<< endl;
    cout<< --x <<endl;

    cout<< "fine del programma" << endl;

    return 0;
}
