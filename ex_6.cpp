#include <stdio.h>
#include <string.h>

#define MAXIMA_LONGITUD_CADENA 1000

void burbuja(char arreglo[][MAXIMA_LONGITUD_CADENA], int longitud)
{
    char temporal[MAXIMA_LONGITUD_CADENA];
    int x, indiceActual;
    for (x = 0; x < longitud; x++)
    {
        for (indiceActual = 0; indiceActual < longitud - 1;
             indiceActual++)
        {
            int indiceSiguienteElemento = indiceActual + 1;
      
            if (strcmp(arreglo[indiceActual], arreglo[indiceSiguienteElemento]) > 0)
            {
               
                memcpy(temporal, arreglo[indiceActual], MAXIMA_LONGITUD_CADENA);
                
                memcpy(arreglo[indiceActual], arreglo[indiceSiguienteElemento], MAXIMA_LONGITUD_CADENA);
                
                memcpy(arreglo[indiceSiguienteElemento], temporal, MAXIMA_LONGITUD_CADENA);
            }
        }
    }
   
}

int main()
{
    char palabras[][MAXIMA_LONGITUD_CADENA] = {
        "Maria",
        "Luis",
        "Bojack",
        "Leon",
        "Maggie",
        "Link",
        "Mario",
        "Claire",
        "Zanahoria",
        "Baroness Von Bon Bon",
    };
    int longitud = sizeof(palabras) / sizeof(palabras[0]);
    
    printf("---Imprimiendo arreglo sin ordenar---\n");
    int i;
    for (i = 0; i < longitud; i++)
    {
        printf("%s\n", palabras[i]);
    }

    burbuja(palabras, longitud);
   
    printf("---Imprimiendo arreglo ordenado---\n");
    for (i = 0; i < longitud; i++)
    {
        printf("%s\n", palabras[i]);
    }
    return 0;
}