#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

const int Zeilen = 20;
const int Spalten = 20;


        int main(){

            int arr[Zeilen][Spalten];

            ifstream eingabe;
            string dateiname = "/Users/jakobthoss/Projekt-Euler/Projekt 11/Problem_11/grid.txt";

            eingabe.open(dateiname.c_str(), ios::in);
            if(!eingabe) {
                cerr << "Kann nicht geoeffnet werden " << endl;
            }            

            for(int i = 0; i < Zeilen; i++) {
                for(int j = 0; j < Spalten; j++) {
                    eingabe >> arr[i][j];
                }

            }



            for(int i = 0; i < Zeilen; i++) {
                for(int j = 0; j < Spalten; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }

            cout << endl;



            long maximal = 1;


            long max_row = 1;
            for(int i = 0; i < Zeilen; i++) {
                for(int k = 0; k < Spalten; k++) {
                    max_row = 1;

                    for(int j = k; j < k+4; j++) {
                    max_row *= arr[i][j];
                    if(max_row > maximal) {
                        maximal = max_row;
                    }
                    }
                }
            }

            cout << " MAX_Reihe/Spalte " << maximal << endl;



        long maximal2 = 1;

        long max_diag = 1;

        int a = 0;
        int i = 0;
        int j = 0;

        while(a < 400) {
            cout << a << endl;
            for(int k = 0; k < 4; k++) {

                max_diag *= arr[i][j];
                i++;
                j++;
            }
            cout << max_diag << endl;
            if(max_diag >= maximal2) {
                maximal2 = max_diag;
            }
            max_diag = 1;
            a++;
        }


        cout << " MAX_Diag_rechts " << maximal2 << endl;

        }



