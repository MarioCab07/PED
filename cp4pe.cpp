#include <iostream>

using namespace std;

void compArreglo(int *x, int y);
int main(){

   int *p, n;
   cout<<"Ingrese el numero de elementos: "; cin>>n;

   p= new int [n];

   compArreglo(p,n);
   delete[] p;


   return 0;
}

void compArreglo(int *x, int y){

   for(int i=0; i<y; i++){

      cout<<"Ingrese el elemento "<<i+1<<": "; cin>>x[i];
   }
}