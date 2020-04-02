/* Implementar função solucao_ex2 */

long vezes2(long rdi);

long solucao_ex2(long rdi, long rsi) {

    long rbx, rax;

    rbx = rdi;
    rdi = rsi;
    rax = vezes2(rdi);

    if (rax <= rbx) return rax + rbx;

    return rax + rbx * 2;
}