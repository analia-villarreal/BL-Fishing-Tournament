#include <iostream>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include "funciones.h"
void iniciarvector (int vec[], int tam){
int i;
for (i=100; i<tam; i++){
    vec[i]=i;
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


void ingresocaptura (int vecespecie[]={}, int veccont[]={}, float participantes[]={}, float peso_minimo []={}){
//const float peso_minimo[0.5, 2, 4, 5, 1, 5, 1.5, 3, 2.5];
float kg, hora;
int participante, idespecie;
char nombreespecie;
int c;
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
for (c=0; c<9; c++){
    if (idespecie==vecespecie[c]){
      veccont[c]++;
    }
}
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


int buscarindice (int idespecie[], int pesominimo[]){
int i;
for (i=0; i<9; i++){
    if (idespecie[i]==pesominimo[i]){
        return i;
    }
}

}


void puntoa (int veccodigo[],float participantes[]){
int i, x, ax=0, ax2=0;
for (i=0; i<15; i++){
    for (x=0; x<14; x++){
        if (participantes[x]<participantes[x+1]){
            ax=participantes[x];
            participantes[x]=participantes[x+1];
            participantes[x+1]=ax;
            ax2=veccodigo[x];
            veccodigo[x]=veccodigo[x+1];
            veccodigo[x+1]=ax2;
        }
    }
}
cout << "El ganador es el participante: " << veccodigo[0] << endl;
cout << "Con un total de " << participantes[0] << " kgs capturados en total."  << endl;
}

void puntob (int vecespecie[]={}, int veccont[]={}){
cout << vecespecie << endl;
cout << veccont << endl;
cout << "----------" << endl;
}

