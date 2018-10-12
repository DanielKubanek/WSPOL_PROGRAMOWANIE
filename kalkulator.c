#include "stdio.h"
#include "math.h"
/*
int silnia(int n) {
    if (n < 2)
        return 1;

    return n * silnia(n - 1);
}

int silnia_2(int n) {
    int silnia = 1;
    if (n < 2)
        return 1;
    for (int i = 1; i <= n; i++) {

        silnia = silnia * i;

    }
    return silnia;
}

int fibonaczi(int f) {
    if (f==0)
        return 0;

    else if (f < 2)
        return 1;

    int f1=1;
    int f2=1;
    int f3;
    for(int i=2; i<=f; i++)
    {
    f3=f1+f2;
    f1=f2;
    f2=f3;


    }
    f=f3;
    return f;

}


int main() {
/*
    int n;
    int f;
    printf("Podaj a\n");
    scanf("%i", &n);
    printf("Podaj liczbę  ciągu fibonacciego\n");
    scanf("%i", &f);

    //printf("%i", silnia(n), "\n");
    printf("%i", silnia_2(n));
    printf("\n");
    printf("%i", fibonaczi(f));
    int main() {
/*
 //////////////////////////////////////////////////////////////////////////////////////////////////////
 /////////////////////////////////CWICZENIA Z ZNAKAMI////////////////////////////////////////////////////
 /////////////////////////////////////////////////////////////////////////////////////////////////////////
//typedef sluzy do nazwania typu typ dni , mamy wplyw na indeksowanie elementów typu wyliczeniowego , uzyteczne przy rankingowaniu
    typedef  enum  {
        ni, po, wt, sr, cz, pi, so

    } dni;
    dni dzien_tygodnia;
    bool czy_byl_obecny;
    dzien_tygodnia = so;
    printf("%i\n", dzien_tygodnia);
    printf("%i\n", czy_byl_obecny);
    int a;
    printf("Czy osoba była obecna? Tak wcisnij 1 Nie wcisnij 2");
    scanf("%i", &a);
    if (a == 1) {
        czy_byl_obecny = 1;
        //printf("%i\n", dzien_tygodnia);
        printf("%i\n", czy_byl_obecny);
    } else if (a == 2) {
        czy_byl_obecny = 0;
      //  printf("%i\n", dzien_tygodnia);
        printf("%i\n", czy_byl_obecny);

    } else if (a != 1 || a != 2) {
        printf("Zła wartość obecnosci");
    }*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////CWICZENIA Z WCZYTYWANIEM ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*int znaczki()
{
     char znak;
    int wartosc_calkowita;
    double wartosc_wymierna;
    char ciag_znakow[256];
    printf("podaj znak");
    scanf("%c%", &znak);
    printf("podaj ciag znakow");
    scanf("%s%", &ciag_znakow);
    printf("podaj liczbe calkowita");
    scanf( "%i" ,   &wartosc_calkowita);
    printf("podaj liczbe wymierna");
    scanf("%lf" , &wartosc_wymierna);
    printf("znak =%c,\n ciag znakowy = %s, \n liczba calkowita = %i,\n liczba wymierna = %lf",
           znak,
           ciag_znakow,
           wartosc_calkowita,
           wartosc_wymierna
            );
}*/
       int main(){

     /*  int Alfa = 5;
       float Beta = 12.45;
               printf("Wynik: \n Alfa = %d, \t Beta = %f\n", Alfa, Beta +500);
       char opcja = 'X';
       char *Napis  = "Opis programu.";
       printf("Wybrano opcję %c : %31s", opcja, Napis);
           for (int i = 0; i <=10 ; ++i) {
               int Alfa1=Alfa+1;
               Alfa=Alfa1;
               printf("%i\n", Alfa);

           }
*/
   /*  int a =4;
     int b = 7;
     printf("%i\n", a++ +b);
     printf("%i\n", ++a +b);
     printf("%i\n", --a + b);
     printf("%i\n", a-- +b);
     */
 /*  int a =5;
   int b = 5;
   double c = 0.00000001;
   double d = 0.00000000001;
   double eps = 0.001;
   printf("%i\n", a==b);
   printf("%i\n", (c-d)*(c-d)<eps);
   */

return 0;
}

