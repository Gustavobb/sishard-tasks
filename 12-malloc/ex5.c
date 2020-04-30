#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "macros_correcoes.h"

/* Recebe duas strings e concatena em uma terceira */
char *mystrcat(char *str1, char *str2) {
    
    int i;
    int str1_lenght = 1;
    int str2_lenght = 1;

    for (i = 0; str1[i] != 0; i++) str1_lenght ++;
    for (i = 0; str2[i] != 0; i++) str2_lenght ++;

    char *strcat = malloc((str1_lenght + str2_lenght) * sizeof(char));

    for (i = 0; i < str1_lenght; i++) strcat[i] = str1[i];
    for (i = 0; i < str2_lenght; i++) strcat[(str1_lenght - 1) + i] = str2[i];

    return strcat;
}

int main(int argc, char *argv[]) {
    # define teste1 "str1"
    # define teste2 "str2"
    # define teste3 "0 str 3"
    

    char *res = mystrcat(teste1, teste2);
    assertEquals("teste 1", strcmp(res, teste1 teste2), 0);
    free(res);

    res = mystrcat(teste1, teste1);
    assertEquals("teste 2", strcmp(res, teste1 teste1), 0);
    free(res);

    res = mystrcat(teste1, teste3);
    assertEquals("teste 3", strcmp(res, teste1 teste3), 0);
    free(res);

    res = mystrcat(teste3, teste1);
    assertEquals("teste 4", strcmp(res, teste3 teste1), 0);
    free(res);

    res = mystrcat("", teste2);
    assertEquals("teste vazio 1", strcmp(res, teste2), 0);
    free(res);

    res = mystrcat(teste1, "");
    assertEquals("teste vazio 2", strcmp(res, teste1), 0);
    free(res);

    res = mystrcat("", "");
    assertEquals("teste vazio 3", strcmp(res, ""), 0);
    free(res);
    
    printSummary

    return 0;
}
