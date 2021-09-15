#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Fibonacci, bis 4 Millionen die geraden Zahlen

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);

    int sum = 2;
    int i = 2;

    while(vec[i-1] <= 4000000) {
       int temp;
       temp = vec[i-1] + vec[i-2];

       if(temp > 4000000)
           break;

       vec.push_back(temp);

       if(vec[i] % 2 == 0) {
           sum += vec[i];
       }

       i++;


    }


    for(int i = 0; i < (int) vec.size(); i++) {
        cout << vec[i] << ", ";
    }

    cout << endl << endl;

    cout << sum << endl << endl;

    return 0;
}
