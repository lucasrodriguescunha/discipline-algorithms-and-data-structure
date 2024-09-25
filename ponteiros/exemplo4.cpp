/*

        Programa para exemplificar indireção múltipla de ponteiros
*/


//Bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>


int main()
{


   int x, *p, **q;  //x = variável do tipo int
                    //p = ponteiro que para uma variável do tipo inteiro
                    //q = ponteiro para outro ponteiro para uma variável do tipo inteiro
                    //portanto, q -> p -> x = 10

   x = 10;  //atribui o valor 10 para variável x
   p = &x;  //p aponta para x
   q = &p;  //q aponta para p


   printf("\nEndereco de x: %X", &x);
   printf("\nEndereco de p: %X", &p);
   printf("\nEndereco de q: %X", &q);
   printf("\nEndereco apontado por p: %X", p);
   printf("\nEndereco apontado por q: %X", q);
   printf("\nValor apontado por q->p->x: %d", **q); //imprime o valor armazenado na variável apontada pelo ponteiro [p] apontado por [q]

   printf("\n\n");

   system("pause");
   return 0;
}

