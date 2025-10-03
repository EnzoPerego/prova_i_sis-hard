int func2(int edi, int esi){
    edi = edi * 300;
    esi = esi * (-25);
    int eax = 1 + edi + esi;
    if (eax == 1951){
        return 1;
    }
    else{
        return 0;
    }

}