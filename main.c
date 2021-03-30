#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float objetosc_prostopadloscianu();
float objetosc_ostroslupa();

int main()
{
for(;;)
{
int c=68 ;

printf("Wybierz bryle\n");
printf("1.objetosc prostopadloscianu\n");
printf("2.objetosc ostroslupa o podstawie prostokata\n");
printf("3. wyjscie\n");
c =getch();
switch (c)

{

case '1':
objetosc_prostopadloscianu();
for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;

case '2':
objetosc_ostroslupa();
for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;

case '3':
exit(EXIT_SUCCESS);


default:
    printf("Zly wybor prosze wybrac cyfre od 1 do 3\n");
    printf("\nacisnij dowolny przycisk zeby wrocic do menu\n");
    //exit(EXIT_SUCCESS);
    getch();
    for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;
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
    printf("wynik= ""%.4f", wynik);
    return wynik;
};


float objetosc_ostroslupa()
{
    float a, b, h, wynik;
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
     printf("wprowadz h\n");
    scanf("%f", &h);
    if (h<=0)
    {
         printf("h musi byc wieksze od 0\n");
         exit (EXIT_FAILURE);
    };
    wynik = (a*b*h)/3.0;
    printf("wynik= ""%.4f", wynik, "\n");
    return wynik;
};
