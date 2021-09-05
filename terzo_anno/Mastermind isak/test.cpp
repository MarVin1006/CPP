#include<iostream>
#include <stdio.h>
#include<cstdlib>
#include<time.h>
using namespace std;
void RandomFill(int v[],int L)
{
    srand(time(NULL));
    
    for(int i=0;i<L;i++)
    {v[i]=rand()%10;}
    
}


bool Contains(int v[],int T,int x)
{
    for(int i=0;i<T;i++)
    {
        if(v[i]==x) return true;
    }
    return false;
}


void RandomFillPlus(int v[],int L)
{
    srand(time(NULL));
    
    for(int i=0;i<L;i++)
    {
        do{v[i]= rand()% 10;
    }while(!Contains(v,i,v[i]));
}

int main();{
    int x;
    int l;
    for(int j=0;i<4;i++)
    {
        cout<<"inserisci un numero"<<endl;
        cin>>x;
    }
    RandomFill(v[l],l);
    Contains(v[l],l,x);
    RandomFillPlus( v[l],l);

    return 0;
}