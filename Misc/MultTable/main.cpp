/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 9, 2014, 7:43 AM
 * Multiplication Table
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    int tbLength = 12;
    int tbHeight = 12;
    
    for(int i = 1; i <= tbHeight; i++){
        for(int j = 1; j <= tbLength; j++){
            cout<<setw(4)<<i*j;            
        }
        cout<<endl;
    }
    return 0;
}

