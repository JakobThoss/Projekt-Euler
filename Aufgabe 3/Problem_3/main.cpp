#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Groeßte Primfaktor von 600851475143

    vector<int> vec;
    long zahl = 600851475143;

    while(zahl > 2) {
        int i = 2;

        while(true) {

            if(zahl % i == 0) {
                vec.push_back(i);
                zahl = zahl / i;
                break;
            }
         i++;
      }
    }


    for(int i = 0; i < (int) vec.size(); i++) {
        cout << vec[i] << " ";
    }

    int n = vec[vec.size()];

    for(int i = 2; i < (int) vec.size(); i++) {
        if(n % i == 0) {
            cout << "keine Primzahl" << endl;
        }
    }

    cout << "Primzahl " << endl;
    return 0;
}
