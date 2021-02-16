#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    cout << "seed " << time(NULL) << endl;
    srand(time(NULL));
    for (int i = 0; i < 10; i++){
    cout << "rand " << i + 1 << ") " << rand() << endl;
    }
}
