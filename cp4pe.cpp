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
} paquete[5];

void completar();

int main()
{
   int num, intento = 0, n;
   
   
   completar();
   cout<<"Ingrese el ID de un paquete: "; cin>>num;
do{
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
   }}while(intento<=3);


return 0;
}

void completar(){

   for(int i=0; i<5;i++){
      srand(time(NULL));
      paquete[i].ID= 1 + rand() % (100);
      cout<<"ID del paquete "<<i+1<<": "<<paquete[i].ID<<endl;
      cout<<"Ingrese el peso en kg del paquete "<<i+1<<": "; cin>>paquete[i].peso;
      cout << "El paquete " << i + 1 << " es fragil? ";cin >> paquete[i].Fragil;  
      cout<<"Ingrese el tamanio del paquete (P= pequenio, M=mediano, G=grande): "; cin>>paquete[i].Tamanio;

   }
   

   
}
