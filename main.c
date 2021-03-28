#include <stdio.h>
#include <stdlib.h>

int main()
{
for(;;)
{
int c=68 ;
///////////prostopadloscian/////////////////
int a;// podstawa prostopadloscianu
int b; // podstawa prostopadloscianu
int d;// wysokosc prostopadlosciannu
int wynik;
/////////////////////////////////////////
int pods;
int h;
int wynik2;
int t;
printf("wybierz cos\n");
printf("1.objetosc prostopadloscianu\n");
printf("2.pole trojkata\n");
printf("3. wyjscie\n");
scanf("%d", &c);
switch (c)

{
//objetosc prostopadloscianu
case 1:

    printf("wprowadz a\n");
    scanf("%d", &a);
    printf("wprowadz b\n");
    scanf("%d", &b);
    printf("wprowadz wysokosc prostopadloscianu\n");
    scanf("%d", &d);
    wynik = a*b*d;
    printf("wynik=" "%d\n", wynik);
    scanf("%d", &t);
    break;
    ////////////////////////////////////////////////////////////////

case 2:
    return 0;
default:
    printf("Zly wybor\n");
}


}

    return 0;

}

