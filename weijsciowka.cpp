#include <iostream>

int zad1(int a[], int n) {
    int i;
    int suma = 0;
    for (i = 0; i < n; i++) {
        suma = suma + a[i];
    }
    return suma / n;
}

int zad2(int a) {
    if (a < 2) {
        return 1;
    }
    else {
        return a * zad2(a - 1);
    }
}

void zad3(int a, int b, int c) {
    if (a <= b && a <=c) {
        printf("%d", a);
        if (b <= c) {
            printf("%d", b);
            printf("%d", c);
        }
        else {
            printf("%d", c);
            printf("%d", b);
        }
    }
    if (b <= a && b <= c) {
        printf("%d", b);
        if (a <= c) {
            printf("%d", a);
            printf("%d", c);
        }
        else {
            printf("%d", c);
            printf("%d", a);
        }
    }
    if (c <= b && c <= a) {
        printf("%d", c);
        if (b <= a) {
            printf("%d", b);
            printf("%d", a);
        }
        else {
            printf("%d", a);
            printf("%d", b);
        }
    }
}

int main()
{
    //zad1
    //funkcja, ktora zwróci srednia arytmetyczna tablicy przekzanej do funkcji pobiera tablice int o dowolnej ilosci elementów

   /* int tab[] = { 5,10,20,45 };
    int n = 4;
    zad1(tab, n);*/

    //zad2
    //funkcja zwroci silniê dla przekazanej wartoœci rekurencujn¹ wartosc int

   /* int a=4;
    zad2(a);*/

    //zad3
    //funkcja wyswietli wartosci parametrow przekazanych na ekranie rosn¹co trzy integery

    int a = 5;
    int b = 10;
    int c = 15;

    zad3(a, b, c);

}
