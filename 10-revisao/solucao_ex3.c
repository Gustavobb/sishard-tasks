// TODO: substituir tipo pelo tipo das globais
extern int var1, var2;

// TODO: implementar solucao_ex3 abaixo


int solucao_ex3(int* rdi) {

    int eax = var1 * 5;

    *rdi = eax + 10 * var2;
    eax += var1;
    var2 = eax;

    return eax;
}