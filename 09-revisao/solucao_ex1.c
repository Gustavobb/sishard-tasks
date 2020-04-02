/* Implementar função solucao_ex1 */

int solucao_ex1(long rdi, long rsi, long rdx) {

   long rcx;
   rcx = rdi + rsi + 4 * rdx;

   rdi *= rdi;

   rdx += rdi + rsi * 2;

   if (rcx >= rdx) return 1;

   return 0;
}