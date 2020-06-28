#include "iostream"
#include "conio.h"
using namespace std;
int i;
int j;
int n;
void matriz();
void final(int, int, float, int numeros[][5]);
int main()
{
    matriz();

    getch();
    return 0;
}
void matriz()
{
    int numeros[10000][5], filas,columnas=5;
    float nota=0;
    cout<<endl<<"Digite el numero de estudiantes: "<<endl; cin>>filas;
    //alamacenando elementos en la matriz
    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; j++)
        {
           cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
          cin>>numeros[i][j];  
        }
        
    }
  //mostrar la matriz
  cout<<endl;
  for (i = 0; i < filas; i++)
  {
    for ( j = 0; j < columnas; j++)
    {
      cout<<"|";
      cout<<numeros[i][j];
      cout<<"|";  
    
    }
      cout<<endl;
      
  } 
  //operacion para nota final
  final(filas,columnas,nota,numeros);
}
void final(int filas, int columnas, float nota, int numeros[][5])
{
   for ( i = 0; i < filas; i++)
  {
     cout<<endl;
  cout<<"A que fila desea sacar la nota final?: "<<endl; cin>>n;
  if (n==0)
 { 
  for ( j = 0; j < columnas; j++)
  {
     nota+=(numeros[n][j]*0.20);
  }
  cout<<"La nota final es de: "<<endl<<nota<<endl;
  if (nota>=6)
  {
    cout<<"El estudiante esta aprobado."<<endl;
  }
  else
  {
    cout<<"El estudiante esta reprobado."<<endl;
  }
}
else if (n>=1)
{
   for ( j = 0; j < columnas; j++)
  {
     nota+=(numeros[n][j]*0.20);
  }
  cout<<"La nota final es de: "<<endl<<nota<<endl;
  if (nota>=6)
  {
    cout<<"El estudiante esta aprobado."<<endl;
  }
  else
  {
    cout<<"El estudiante esta reprobado."<<endl;
  }
}
else
{
  cout<<"El numero de fila es invalido."<<endl;
} 
nota=0;
}
}