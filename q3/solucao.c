// Seu código da funcao1_solucao
int funcao1_solucao(long rdi, int esi, int edx){
    int eax = 0;
    if(eax >= esi){
        return -1;
    }
    while(edx != (rdi + eax * 4)){
        eax += 1;
    }

    return eax;
    
}

