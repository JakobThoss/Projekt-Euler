#include <iostream>
#include <cmath>


using namespace std;


// a < b < c -> a + b + c = 1000    (z.b 3^2 + 4^2 = 9 + 16 = 25 = 5^2)

int main()
{
    int summe = 0;

    for(int i = 1; i < 1000; i++) {
        for(int j = i; j < 1000; j++) {
            for(int k = j; k < 1000; k++) {
                if(pow(i,2) + pow(j,2) == pow(k,2) && i + j + k == 1000) {
                    cout << " i = " << i << "   j = " << j << "   k = " << k << endl;
                    summe = i * j * k;
                    cout << summe << endl;
                    return 0;
                }
            }
        }
    }


    return 0;
}
