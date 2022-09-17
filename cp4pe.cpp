#include <iostream>
#include <random>
#include <stdlib.h>

#include <time.h>

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
   int num, intento = 0, n, repetir, aux, i;
   bool ok;
   n = sizeof(paquete) / sizeof(paquete[0]);

   completar(n);

   do
   {
      cout << " ";
      cin >> num;
      for (i = 0; i < n; i++)
      {

         if (paquete[i].ID == num)
         {

            ok = true;
            aux = i;
         }
      }
         

      if (ok == true)
      {
         cout << "ID: " << paquete[aux].ID << endl;
         cout << "Peso: " << paquete[aux].peso << endl;
         cout << "Fragil: " << paquete[aux].Fragil << endl;
         cout << "Tamanio: " << paquete[aux].Tamanio << endl;
      }
      else
      {
         cout << "El ID ingresado no es valido" << endl;
      }

      cout << "Desea buscar otro paquete? Si=1 - No=2" << endl;
      cin >> repetir;

   } while (repetir == 1);

   return 0;
}

void completar(int n)
{
   for (int i = 0; i < n; i++)
   {
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
}
