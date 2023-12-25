#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float reais;
    do {
        reais = get_float("Troca devida: ");
    } while( reais <= 0);

   int centavos = round(reais * 100);

   int moedas = 0;

   while (centavos >=25)
   {
    centavos -= 25;
    moedas++;

   }
   while (centavos >=10)
   {
    centavos -= 10;
    moedas++;
   }
   while (centavos >= 5)
   {
    centavos -= 5;
    moedas++;
   }
   while (centavos >= 1)
   {
    centavos -= 1;
    moedas++;
   }

    printf("%d\n", moedas);

    return 0;
}
