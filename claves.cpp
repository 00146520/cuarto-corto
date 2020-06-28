#include "iostream"
#include "conio.h"
#include "string.h"
using namespace std;
char clave[10]={'m','u','r','c','i','e','l','a','g','o'};
char num[10]={'0','1','2','3','4','5','6','7','8','9'};
void cod(char palabra[],int size);
void decod(char palabra[], int size);
int main()
{
    cout<<endl<<"Decodificar palabras."<<endl;

    char palabra[100];
    int size;

    cout<<"digite su palabra: "<<endl;; 
    cin.getline(palabra,100,'\n');

    size=strlen(palabra);

    cod(palabra,size);
    cout<<endl;

    decod(palabra,size);
    cout<<endl;

    getch();
    return 0;
}
void cod(char palabra[], int size)
{
    int i,j;
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (palabra[i] == clave[j])
            {
                palabra[i] = num[j];
            }
        }
    }
    cout<<"La codificacion es: "<<endl<<palabra;
}
    void decod(char palabra[], int size){
    int i,o;
    for ( i = 0; i < size; i++)
    {
        for  (o = 0; o < 10; o++)
        {
            if (palabra[i]== num[o])
            {
                palabra[i] = clave[o];
            }
        }
    }
    cout<<"La decodificacion es: "<<endl<<palabra;
}
