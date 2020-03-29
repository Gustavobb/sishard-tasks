
/* Implemente aqui sua versão em C da função soma_n
 * presente no arquivo ex4.o
 * 
 * Chame sua função de soma_n_solucao */

long soma_n_solucao(int edi) {
    
    long edx = 0;
    long eax = 0;
  
    while (edi > edx) {
        eax += edx;
        edx ++;
    }
    
    return eax;
}