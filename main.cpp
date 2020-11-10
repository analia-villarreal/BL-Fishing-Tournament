#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include <clocale>
#include "Bibliotecas/rlutil.h"
#include "funciones.h"
using namespace rlutil;

int main()
{
     setlocale(LC_ALL,"Spanish");

     int opcion;

    do{
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
        cout << endl; << endl << " < ";
        //cin >> opcion;
        opcion = get.key();

        switch(opcion){
            case 49:
                count << "Opción 1";
            break;
            case 50:
                count << "Opción 2";
            break;
            case 51:
                count << "Opción 3";
            break;
            case 52:
                count << "Opción 4";
            break;
            case 53:
                count << "Opción 5;
            break;
            case 48:

            break;

        }
            //cin.ignore();
            anykey();

    }while(opcion != 48 );





    return 0;
}
