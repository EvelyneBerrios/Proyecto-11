#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char resp;
    int num,mayor;
    do
{
     cout<<"Ingresar numero entero...>";
     cin>>num;
     _flushall();
     if (50<num<100)
     {
         mayor=num;
     }
     do
{
     cout<<"Desea Continuar...:";
     cin.get(resp);
     _flushall();


}    while ((toupper(resp) !='S') and (toupper(resp) != 'N'));
     }while ((toupper(resp)== 'S'));
     cout<<"Mayor sera..."<<mayor<<"\n";


    return 0;
}

   /* Ingresar un numero entero entre 50-100,
    luego preguntr si desea continuar. Al
    final del ciclo debera presentar el
    promedio de los numeros entre 80-100,   x rid
    y cual fue el numero mayor.*/

