#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Palindrom Zahlen mit 3 Ziffern
    // groeßtes Palindrom mit 2 Ziffern ist 9009 (91*99)

    int palindrome;
    int einer;
    int zehner;
    int hunderter;
    int tausender;
    int zehntausender;
    int hundertausender;

    int max = 0;
    int x;
    int y;

    for(int i = 999; i >= 100; i--) {
        for(int j = 999; j >= 100; j--) {


        int zahl = i * j;

        hundertausender = zahl / 100000;
        zehntausender = zahl / 10000 % 10;
        tausender = zahl / 1000 % 10;
        hunderter = zahl / 100 % 10;
        zehner = zahl / 10 % 10;
        einer = zahl / 1 % 10;

        if(hundertausender == einer && zehntausender == zehner && tausender == hunderter) {
            if(zahl > max) {
                max = zahl;
                x = i;
                y = j;
            }
        }
    }
    }

    palindrome = max;

        cout << endl;
 //   cout << hundertausender << " " << zehntausender << " " << tausender << " " << hunderter << " " << zehner << " " << einer << endl;

    cout << palindrome << ": " << "(" << x << " * " << y << ")" << endl;
    return 0;
}
