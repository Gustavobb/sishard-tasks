/* Implementar solucao_ex4 */

int mais_um(int edi);

int solucao_ex4(int edi) {

    unsigned int ebx = edi, eax = 0;
    
    while (eax < ebx) eax = mais_um(eax);
    return eax;
}