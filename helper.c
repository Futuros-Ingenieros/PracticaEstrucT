#include "helper.h"

void cambiarMinuscula(char *cadena) {

    for (int i = 0; cadena[i]!= '\0' ; ++i) {
        if(cadena[i] >=65 && cadena[i] <= 90) {
            cadena[i] = cadena[i] + 32;
        }
        }
}
