#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Multiples von 3 und 5 , unter 100

    vector<int> vec;
    int sum = 0;


    for(int i = 1; i < 1000; i++) {
        if(i % 5 == 0 || i % 3 == 0) {
            vec.push_back(i);
            sum += i;
        }
    }

    for(int i = 0; i < (int) vec.size(); i++) {
        cout << vec[i] << ", ";
    }
    cout << endl << endl;

    cout << sum << endl;

    return 0;
}
