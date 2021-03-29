#include <stdio.h>
#include <stdlib.h>
float objetosc_prostopadloscianu();
int main()
{
for(;;)
{
int c=68 ;

printf("wybierz cos\n");
printf("1.objetosc prostopadloscianu\n");
printf("2.pole trojkata\n");
printf("3. wyjscie\n");
scanf("%d", &c);
switch (c)

{

case 1:

objetosc_prostopadloscianu();
case 2:
    return 0;
default:
    printf("Zly wybor\n");
}


}

    return 0;

};
float objetosc_prostopadloscianu()
{
    float a, b, c, wynik;
    printf("wprowadz a\n");
    scanf("%f", &a);
    if (a<=0)
    {
         printf("a musi byc wieksze od 0\n");
         exit (EXIT_FAILURE);
    };
     printf("wprowadz b\n");
    scanf("%f", &b);
    if (b<=0)
    {
         printf("b musi byc wieksze od 0\n");
         exit (EXIT_FAILURE);
    };
     printf("wprowadz c\n");
    scanf("%f", &c);
    if (c<=0)
    {
         printf("c musi byc wieksze od 0\n");
         exit (EXIT_FAILURE);
    };
    wynik = a*b*c;
    printf("wynik= ""%f", wynik);
    return wynik;


};
