
int funcao1_goto(int esi, int edx, long rdi){
    int eax = 0;
    goto label14;
    label11:
    eax += 1;
    label14:
    if(eax >= esi){
        goto28;
    }
    long rcx = eax;
    if(edx != (rdi + rcx * 4)){
        goto label11;
    }
    goto label33;
    label28:
    eax = -1
    label33:
    return eax;
}


int funcao1_solucao(long rdi, int esi, int edx){
    int eax = 0;
    if(eax >= esi){
        return -1;
    }
    //long rcx = eax;
    while(edx != (rdi + eax * 4)){
        eax += 1;
    }

    return eax;
    
}

