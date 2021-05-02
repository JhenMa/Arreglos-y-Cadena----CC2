#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int Partition(int arr[], int s, int e); 
void QuickSort(long long arr[], int s, int e);

int main(){
    srand(time(NULL));
    long long size=1000000;          
    long long *arreglo = new long long[size];
    
    for(long long i=0;i<size;i++)
        arreglo[i] = rand() % 11+1;
    
    cout<<"El arreglo es "<<endl;
    for(long long i=0;i<size;i++)
        cout<<arreglo[i]<<" ";
    
    cout<<endl;
    
    QuickSort(arreglo,0,(size-1));  
    
    cout<<"El arreglo ordenado es "<<endl;
    for(int i=0;i<size;i++)
        cout<<arreglo[i]<<" ";
    delete[] arreglo;
    return 0;
}

int Partition(long long arr[], int s, int e){  

    int pivot = arr[e];                     
    int pIndex = s;                         
 
    for(int i = s;i<e;i++){                 

        if(arr[i]<=pivot){                   
            int temp = arr[i];              
            arr[i] = arr[pIndex];           
            arr[pIndex] = temp;             
            pIndex++;                       
        }
    }
 
    int temp = arr[e];                      
    arr[e] = arr[pIndex];                   
    arr[pIndex] = temp;                     

    return pIndex;                         
}
 
void QuickSort(long long arr[], int s, int e){ 
    if(s<e){
        int p = Partition(arr,s, e);
        QuickSort(arr, s, (p-1)); 
        QuickSort(arr, (p+1), e);  
    }
}