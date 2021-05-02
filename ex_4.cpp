#include <iostream>

using namespace std;

int tama_cade_itera(const char cadena[], int );
int tama_cade_recur(const char cadena[], int longi);

int main(){
    int longi = 0;
    char cadena[] = "adsdfa asa";
    cout<<"Longitud de cadena iterativo es: "<<tama_cade_itera(cadena, longi)<<endl;
    cout<<"Longitud de cadena recursivo es: "<<tama_cade_recur(cadena, longi);
    return 0;
}

int tama_cade_itera(const char cadena[], int longi){
    char actual = cadena[0];
    for (; actual != '\0'; actual = cadena[++longi]);
    return longi;
}
int tama_cade_recur(const char cadena[], int longi){
    int sum = 0;
    if (cadena[longi] == '\0' )
        return sum;
    else
        return sum + 1 + tama_cade_recur(cadena, longi+1);
    
}
