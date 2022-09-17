#include <iostream>
#include <random>
#include <stdlib.h>

#include<time.h>

using namespace std;


struct Paquetes
{
   int ID;
   int peso;
   string Fragil;
   char Tamanio;
} paquete[3];

void completar(int);

int main()
{
   int num,n,  repetir;
   
   n=sizeof(paquete)/sizeof(paquete[0]);
   
   completar(n);
   
   cout<<"Ingrese un ID: "; cin>>num;
   
   for( int i=0; i<n;i++){
      
      if(paquete[i].ID==num){
         cout<<"ID: "<<paquete[i].ID<<endl;
         cout<<"Peso: "<<paquete[i].peso<<endl;
         cout << "Fragil: " << paquete[i].Fragil << endl;
         cout << "Tamanio: " << paquete[i].Tamanio << endl;
      }else{
         cout<<"El ID ingresado no corresponde con ningun paquete"<<endl;
        
      }
         

         //cout<<"Desea buscar otro paquete? Si=1 - No=2"<<endl; cin>>repetir;
      
   


return 0;
}

void completar(int n){

   srand(time(NULL));
   paquete[i].ID = 1 + rand() % (100);
   cout << "ID del paquete " << i + 1 << ": " << paquete[i].ID << endl;
   cout << "Ingrese el peso en kg del paquete " << i + 1 << ": ";
   cin >> paquete[i].peso;
   cout << "El paquete " << i + 1 << " es fragil? ";
   cin >> paquete[i].Fragil;
   cout << "Ingrese el tamanio del paquete (P= pequenio, M=mediano, G=grande): ";
   cin >> paquete[i].Tamanio;
}



