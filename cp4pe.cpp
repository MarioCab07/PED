#include <iostream>

using namespace std;

void compArreglo(int *x, int y);

void ordenar(int *x, int y);

void imprimir(int *x, int y);


int main(){

   int *p, n;
   cout<<"Ingrese el numero de elementos: "; cin>>n;

   p= new int [n];

   compArreglo(p,n);
   
   //imprimir(p,n);

   ordenar(p,n);
   imprimir(p,n);
   delete[] p;

   return 0;
}

void compArreglo(int *x, int y){

   for(int i=0; i<y; i++){

      cout<<"Ingrese el elemento "<<i+1<<": "; cin>>x[i];
   }
}

void ordenar(int *x, int y){

   int max, aux, i,j;

   for(i=0; i<y;i++){

      max=i;

      for(j=i+1; j<y;j++){

         if(x[j]>x[max]){
            max=j;
         }
      }

      aux=x[i];
      x[i]=x[max];
      x[max]=aux;
   }



}


void imprimir(int *x, int y){

   for (int i=0; i<y; i++){

      cout<<"Elemento "<<i+1<<": "<<x[i]<<endl<<endl;
      
   }
}