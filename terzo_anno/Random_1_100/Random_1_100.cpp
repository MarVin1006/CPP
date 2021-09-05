#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int generanumero(){
    return (rand() % 10) + 1;
}


int main()
{
    srand(time(NULL));
    cout << generanumero();
}
