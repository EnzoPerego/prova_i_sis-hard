// Seu código da funcao1_solucao
int funcao1_solucao(int *rdi, int esi, int edx){
    int eax = 0;
    while(edx != rdi[eax]){
        eax += 1;
        if(eax >= esi){
            return -1;
        }
    }

    return eax;
    
}

