#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int summe_zusammen = 0;
    int summe_getrennt = 0;

    for(int i = 1; i <= 100; i++) {
        summe_getrennt += pow(i,2);
    }

    for(int i = 1; i <= 100; i++) {
        summe_zusammen += i;
    }

    summe_zusammen = pow(summe_zusammen,2);


    cout << summe_zusammen << " - " << summe_getrennt << " = " << summe_zusammen-summe_getrennt << endl;
    return 0;
}
