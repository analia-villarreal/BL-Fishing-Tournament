
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include <clocale>
#include "rlutil.h"
#include "funciones.h"
using namespace rlutil;
int main()
{
      setlocale(LC_ALL,"Spanish");

     int opcion, i;
     const int t1=15;
     const int t2=9;
    int vecparticipante[]={};
    int veccodigo[t1]={100,101,102,103,104,105,106,107,108,109,110,111,112,113,114};
    float  veckg[]={};
    int vecespecie[t2]={10,20,30,40,50,60,70,80,90};
    int veccont [t2]={};
    int vechora[]={};
     float participantes[t1]={};
     float peso_minimo[t2]={0.5, 2, 4, 5, 1, 5, 1.5, 3, 2.5};
     string especie[t2]={"Anchoa","Pejerrey","Bagre","Boga","Caballa","Carpa","Trucha patagónica","Dorado","Lisa"};

    do{
       setBackgroundColor (BLUE);
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
        cout << endl << endl << " > ";
       // cin >> opcion;
        opcion = getkey();
     //   cout << "Opción elegida " << opcion << endl;
        switch(opcion){
            case 49:
            ingresocaptura (vecespecie, veccont, participantes, peso_minimo);
            break;
            case 50:
            // Reporte A - Ganador de la competencia
           // Listar por pantalla el código del pescador/a que vaya ganando la competencia
           // y la totalidad de kilogramos capturados hasta el momento.

                puntoa (veccodigo, participantes);

            break;
            case 51:
                puntob (vecespecie, veccont);
            break;
            case 52:
                cout << "Opción 4";
            break;
            case 53:
                cout << "Opción 5";
            break;
            case 48:
            break;

        }
      //   cin.ignore();
          anykey();

    }while(opcion != 48 );

    return 0;
}
