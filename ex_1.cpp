#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

long long sum_array_iter(const long long array[],const long long tam);
long long sum_array_recu(const long long array[],const long long tam);

int main(){
    srand(time(NULL));
    long long tam = 1000000;
    long long *array = new long long[tam];
    for (long long i = 0; i < tam; i++)
    {
        array[i] = rand() % 11+1;
    }
    cout<<"El resultado iterativo es: "<<sum_array_iter(array,tam)<<endl;
    cout<<"El resultado recursiva es: "<<sum_array_recu(array,tam);
    delete[] array;
    return 0;
}

long long sum_array_iter(const long long array[],const long long tam){
    long long sum = 0;
    for (long long i = 0; i < tam; sum += array[i++]);
    return sum;
}

long long sum_array_recu(const long long array[],const long long tam){
    long long sum;
    if (tam == 1)
    {
        return array[0];
    }
    else{
        return array[tam-1]+sum_array_recu(array,tam-1);
    }
}