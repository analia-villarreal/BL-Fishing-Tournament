#include <iostream>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include "funciones.h"
void iniciarvector (int vec[], int tam){
int i;
for (i=0; i<tam; i++){
    vec[i+1]*10;
}
}
void ponerceroint (int vec[], int tam){
    int i;
for (i=0; i<tam; i++){
    vec[i]=0;
}
}

void ponercerofloat (float vec[], int tam){
    int i;
for (i=0; i<tam; i++){
    vec[i]=0;
}
}


void ingresocaptura (int participantes[]={}, int vecespecie[]={}, float vechora[]={}, float peso_minimo[]={}){

float kg, hora;
int participante, idespecie;
char nombreespecie;
cls();
cout << "Ingrese los datos de su captura " << endl;
cout << "--------------------------------" << endl;
cout << "Ingrese codigo de participante: " << endl;
cin >> participante;

while (participante!=0 ){

 while (participante < 100 || participante >114){
cout << "CODIGO ERRONEO." << endl;
cout << "Ingrese codigo de participante: " << endl;
cin >> participante;
 }
cout << "Ingrese codigo de especie: " << endl;
cin >> idespecie;

while (idespecie <10 || idespecie >90){
cout << "CODIGO ERRONEO. " << endl;
cout << "Ingrese codigo de especie: " << endl;
cin >> idespecie;
}
cout << "Ingrese la hora: " << endl;
cin >> hora;
while (hora <6 || hora >23){
cout << "CODIGO ERRONEO." << endl;
cout << "Ingrese la hora: " << endl;
cin >> hora;
}
cout << "Ingrese peso de su captura: " << endl;
cin >> kg;
if (peso_minimo[idespecie/10-1]<kg){
    participantes[participante-100]+=kg;
}


cls();
cout << "Ingrese los datos de su captura " << endl;
cout << "Ingrese codigo de participante: " << endl;
cin >> participante;

}
}


int buscarindice (int idespecie, int pesominimo[]){
int i;
for (i=0; i<9; i++){
    if (idespecie==pesominimo[i]){
        return i;
    }
}

}


void puntoa (int veccodigo[]={},float participantes[]={}){
int i, x, ax, ax2;
for (i=0; i<15; i++){
    for (x=0; x<14; x++){
        if (participantes[i]<participantes[i+1]){
            ax=participantes[x+1];
            participantes[x+1]=participantes[x];
            participantes[x]=ax;
            ax2=veccodigo[x+1];
            veccodigo[x+1]=veccodigo[x];
            veccodigo[x]=ax2;
        }
    }
}
}



