#include <iostream>

using namespace std;

void compArreglo(int *x, int y);


void ordenar(int *x, int y);

void imprimir(int *x, int y);

struct Paquetes
{
   int ID;
   int peso;
   string Fragil;
   char Tamanio;
} paquete[5];

void completar();

int main()
{
   int num, intento = 0, n;
   
   
   completar();
   cout<<"Ingrese el ID de un paquete: "; cin>>num;

   for( int i=0; i<5;i++){
      
      if(paquete[i].ID==num){
         cout<<"ID: "<<paquete[i].ID<<endl;
         cout<<"Peso: "<<paquete[i].peso<<endl;
         cout << "Fragil: " << paquete[i].Fragil << endl;
         cout << "Tamanio: " << paquete[i].Tamanio << endl;
      }else{
         intento++;
        
      }

      if(intento>3){
         break;
      }
   }



