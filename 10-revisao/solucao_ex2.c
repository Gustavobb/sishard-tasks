//TODO: implementar função solucao_ex2 aqui

void solucao_ex2(long* rdi, long rsi, long* rdx) {

    if (*rdi > *rdx) rsi *= 3;
    else (*rdx) ++;
    
    *rdi = rsi + *rdx;
}