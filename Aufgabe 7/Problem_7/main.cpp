#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // Primzahl 10001
    vector<long> vec;
    bool yessir = false;
    int anzahlElemente = 1;

    vec.push_back(2);

        for(long i = 2; i < LONG_MAX; i++) {
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
            if(anzahlElemente == 10001) {
                cout << i << endl;
                break;
            }
        }

   //     for(int i = 0; i < anzahlElemente; i++) {
   //         cout << vec[i] << " ";
   //     }

        cout << endl << endl;

    return 0;
}
