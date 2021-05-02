#include <iostream>
#include <time.h>
#include <stdlib.h>

void invert_iter(long long array[],const long long tam);
void  invert_recur(long long array[], long long inicio, long long fin);

using namespace std;

int main(){
    srand(time(NULL));
    long long tam= 1000000;
    long long *array = new long long[tam];
    for (long long i = 0; i < tam; i++)
    {
        array[i] = rand() % 11+1;
    }
    cout<<"Arreglo Normal"<<endl;
    for (long long i = 0; i < tam; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    invert_recur(array,0,tam-1);
    cout<<"Arreglo invertida recursivo"<<endl;
    for (long long i = 0; i < tam; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    invert_iter(array,tam);
    cout<<"Arreglo invertida iterativo"<<endl;
    for (long long i = 0; i < tam; i++)
    {
        cout<<array[i]<<" ";
    }
    delete[] array;
    return 0;
}

void invert_iter(long long array[],const long long tam){
    long long temporal;
    for (long long x = 0; x < tam / 2; x++){
        temporal = array[x];
        array[x] = array[tam - x - 1];
        array[tam - x - 1] = temporal;
    }
}

void  invert_recur(long long array[], long long inicio, long long fin){  
    if(inicio<fin ){                                        
        long long aux=array[inicio];
        array[inicio]=array[fin];                           
        array[fin]=aux;
        invert_recur(array,inicio+1,fin-1);            
    }
}
