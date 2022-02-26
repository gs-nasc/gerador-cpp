//Processo.cpp
#include "Processo.h"

int main()
{
    Processo processo1;
    processo1.imprimir();

    Processo processo2(25, "Teste", "Teste", "Teste");
    processo2.imprimir();
}
