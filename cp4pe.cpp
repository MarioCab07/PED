#include <iostream>

using namespace std;



struct Paquetes
{
   int ID;
   int peso;
   string Fragil;
   char Tamanio;
} paquete[5];

void completar(int);

int main()
{
   int num, intento = 0, n;
   n=sizeof(paquete)/sizeof(paquete[0]);
   
   completar(n);
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
        
      
   }}}while(intento<=3);

   return 0;
   
}

void completar(int n){

   for(int i=0; i<n;i++){

      cout<<""
   }

}