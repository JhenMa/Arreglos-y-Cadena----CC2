#include <iostream>

using namespace std;

const int longi = 0;
int tama_cade_itera(const char cadena[], int longi);
void concate(char cadena1[], char cadena2[]);

int main(){
    char cadena1[] = "Pepe";
    char cadena2[20] = "Lucho";
    concate(cadena1, cadena2);

    cout<<cadena2;

    return 0;
}

void concate(char cadena1[], char cadena2[]){
    int i = 0;
    int j = tama_cade_itera(cadena2,longi)+1;
    while (cadena1[i] != '\0')
    {
        cadena2[j] = cadena1[i];
        j++;
        i++;
    }
    cadena2[tama_cade_itera(cadena2,longi)] = ' ';
    cadena2[tama_cade_itera(cadena2,longi)+i] = '\0';
}

int tama_cade_itera(const char cadena[], int longi){
    char actual = cadena[0];
    for (; actual != '\0'; actual = cadena[++longi]);
    return longi;
}