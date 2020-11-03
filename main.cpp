#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include <clocale>
#include "Bibliotecas/rlutil.h"
using namespace rlutil;

int main()
{
     setlocale(LC_ALL,"Spanish");

    cls();
    setColor(WHITE);
    cout << "BRIAN LARA'S FISHING TOURNAMENT "<< endl;
    cout << "--------------------------------"<< endl;
    cout << "1 - REGISTRAR CAPTURAS"<< endl;
    cout << "2 - REPORTE A"<< endl;
    cout << "3 - REPORTE B"<< endl;
    cout << "4 - REPORTE C"<< endl;
    cout << "5 - CRÉDITOS"<< endl;
    cout << "--------------------------------"<< endl;
    cout << "0 - SALIR"<< endl;



    return 0;
}
