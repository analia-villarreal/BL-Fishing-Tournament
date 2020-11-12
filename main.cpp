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
    int vechora[]={};
     float participantes[]={};
     float peso_minimo[t2]={0.5, 2, 4, 5, 1, 5, 1.5, 3, 2.5 };
     string especie[t2]={"Anchoa","Pejerrey","Bagre","Boga","Caballa","Carpa","Trucha patagónica","Dorado","Lisa"};

    ponerceroint(veccodigo, 15);

    do{
       /// setBackgroundColor (BLUE);
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
                ingresocaptura (veccodigo, vechora, participantes, peso_minimo);
            break;
            case 50:

                puntoa (veccodigo, participantes);
                //for (i=0; i<15; i++){
                cout << participantes[0] << endl;
                cout << veccodigo[0] << endl;
               // }
           // Reporte A - Ganador de la competencia
           // Listar por pantalla el código del pescador/a que vaya ganando la competencia
           // y la totalidad de kilogramos capturados hasta el momento.

          ///      cout << ;
            break;
            case 51:
                cout << "Opción 3";
            break;
            case 52:
                cout << "Opción 4";
            break;
            case 53:
                cout << "Opción 5";
            break;
            case 48:
              ///  return 0;
            break;

        }
      //   cin.ignore();
          anykey();

    }while(opcion != 48 );

    return 0;
}
