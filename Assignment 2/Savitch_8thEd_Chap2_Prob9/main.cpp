/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Class#: 40375
 * Created on January 16, 2014, 8:43 AM
 * Savitch 8th Edition Chapter 2 Problem 9
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    float prin, monInt = .015, curAmt = 1000, monPay = 50;
    
    //Calculate
    cout<<setprecision(2)<<fixed<<showpoint;
    int month = 1;
    while(curAmt > 0){
        prin = curAmt*monInt;
        curAmt -= monPay-prin;
        cout<<month<<" Current Amount = $"<<curAmt<<endl;
        month++;
    }
    cout<<endl;
    cout<<"Months to Pay Off = "<<month-1<<endl;
    return 0;
}

