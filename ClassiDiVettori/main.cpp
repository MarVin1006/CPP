///Classi di vettori
#include <iostream>
using namespace std;

class Vettore
{
    private:
    const int DIM=100;
    int* buffer, p=0;
    public:
    Vettore(){
        buffer=new int[DIM];
        for (int i=0; i<DIM; i++)
        {
            buffer[i]=0;
        }

    }
    void stampa(){
        for(int i=0; i<DIM; i++)
        {
            cout<<buffer[i]<<" ";
        }
        cout<<endl;
    }
    void write(int index, int value){
        if(index<0 || index>=DIM){
            return;
        }
        buffer[index]=value;

    }

    int leggi(int index){
        if(index<0 || index>=DIM){
            return -1;
        }
        return buffer[index];
    }
};

int main()
{
    Vettore v, w;
    v.write(3,33);
    w.write(4,44);
    v.stampa();
    w.stampa();

    return 0;
}
