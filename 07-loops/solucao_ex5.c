
/* Implemente aqui sua versão em C da função ex5
 * presente no arquivo ex5.o
 * 
 * Chame sua função de ex5_solucao */

long ex5_solucao(long rdi, long rsi) {

    long ecx = 0, r8 = 0, rdx;

    while (ecx < rdi) {
        rdx = ecx % rsi;
        if (!rdx) r8 += ecx;
        ecx ++;
    }

    return r8;
}