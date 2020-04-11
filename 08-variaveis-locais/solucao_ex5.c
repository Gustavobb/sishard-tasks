#include "stdio.h"

int ex5_solucao() {

    int oxc = 1, ebx = 0;

    while (oxc > 0) {
        scanf("%d", &oxc);
        ebx += oxc;
    }

    return ebx - oxc;
}