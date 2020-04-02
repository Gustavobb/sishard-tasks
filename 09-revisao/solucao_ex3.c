   /* Implementar solucao_ex3 */

   int solucao_ex3(long rdi, long rsi, int* rdx, int* rcx, int* r8) {

       int eax = 0;

       if (rdi < rsi) eax = 1;
       *rdx = eax;

       eax = 0;
       if (rdi == rsi) eax = 1;
       *rcx = eax;

       eax = 0;
       if (rdi > rsi) eax = 1;
       *r8 = eax;

       return eax;
   }