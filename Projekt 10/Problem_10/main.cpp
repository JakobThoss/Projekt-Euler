#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Summer aller Primzahlen unter 2 Millionen




/*int main()
{

    vector<long> vec;
    bool yessir = false;
    int anzahlElemente = 1;

    vec.push_back(2);

        for(long i = 2; i < 2000000; i++) {
            for(int j = 2; j < i; j++) {
                if(i % j == 0) {
                    yessir = false;
                    break;
                }
                else
                    yessir = true;
            }
            if(yessir == true) {
                vec.push_back(i);
                anzahlElemente++;
            }
        }

        long summe = 0;
       for(int i = 0; i < anzahlElemente; i++) {
           summe += vec[i];
       }

        cout << summe << endl;

    return 0;
}
    */

const int   SIZE    = 2000000;

void sieveOfEratosthenes(const long size, vector<long> & primes){

    bool arr[size];
    long root = sqrt(size);
    for(long i=0; i<size; i++)
        arr[i] = true;

    arr[0] = false;
    arr[1] = false;

    // Laufe über alle möglichen Kandidaten von Primfaktoren
    for(long j=2; j<size; j++){
        if(arr[j] == true){
            // j ist Primzahl
            primes.push_back(j);
            // Setze alle Vielfachen von j auf false, solange j noch kleiner als die Wurzel
            // Ansonsten sind alle schon korrekt gesetzt und der restliche Teil sind Primzahlen
            if(j<root)
                for(long k = 2*j; k<size; k=k+j){
                    arr[k] = false;
                }
        }
        else{
            // Überspringen
        }
    }

    return;
}

int main(){

    vector<long> v;
    sieveOfEratosthenes(SIZE, v);

    long sum = 0;
    for(unsigned int i=0; i<v.size(); i++)
        sum += v[i];

    cout << sum << endl;

    return 0;
}


