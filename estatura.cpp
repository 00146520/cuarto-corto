#include "iostream"
#include "conio.h"
#include "stdlib.h"
using namespace std;
int i;
int arriba=0, abajo = 0, justo=0;
float comp(float&, float&);
float prom();
int main()
{
 prom();  
  
    
 
getch();
return 0;
}

float prom()
{
float estaturas[25];
float suma=0;
float promedio=0;
for ( i = 0; i < 25; i++)
{
     cout<<endl<<"Estatura del estudiante: "<<i+1<<endl;
     cout<<"Ingrese la estatura del estudiante: "<<endl; cin>>estaturas[i];
     
}
for ( i = 0; i < 25; i++)
{
     suma+=estaturas[i];
}
for ( i = 0; i < 25; i++)
{
     promedio=suma/25;
     comp(estaturas[i], promedio);
}
     cout<<endl<<"El promedio de altura es de: "<<endl<<promedio;
     cout<<endl<<"Arriba del promedio hay: "<<endl<<arriba;
     cout<<endl<<"Abajo del promedio hay: "<<endl<<abajo;
     cout<<endl<<"Justo en el promedio hay: "<<endl<<justo;
}


float comp(float& estatura, float& promedio )
{
     if (estatura>promedio)
     {
          arriba = arriba+1;
     }
     else if (estatura<promedio)
     {
          abajo= abajo+1;
     }
     
     else
     {
         justo = justo+1;
     }
}