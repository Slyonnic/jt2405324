/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 9, 2014
 * Savitch 8th Edition Chapter 1 Problem 8
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float QT = 25;//Value of quarters
const float DI = 10;//Value of dimes
const float NI = 5;//Value of nickels

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare vars
    int nQt, nDi, nNi;//Number of quarters, dimes, nickels
    float total;//total value of coins
    
    //assign input to vars
    cout<<"Number of Quarters?"<<endl;
    cin>>nQt;
    cout<<"Number of Dimes?"<<endl;
    cin>>nDi;
    cout<<"Number of Nickels?"<<endl;
    cin>>nNi;
    
    //Calculate Total
    total = (QT*nQt)+(DI*nDi)+(NI*nNi);
    total /= 100;
    
    //Display Result
    cout<<"Total: $"<<fixed<<setprecision(2)<<total<<endl;
    //Exit
    return 0;
}

