#include <stdio.h>
#include "helper.h"

int main() {

    char cadena[] ="HOLANi colasValenZUela";

    printf("%s",cadena);

    cambiarMinuscula(&cadena);

    printf("\n");

    printf("%s",cadena);

    return 0;
}
