/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 18, 2014
 * Savitch 8thEd Chap2 Prob3
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float PAY_INC = 7.6e-2;//Pay increase in %

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Vars
    float annualPay, payDue, nAnnualPay, monSal;
    
    //Prompt for user input
    cout<<"What is you current Annual Salary?"<<endl;
    cin>>annualPay;
    
    //Calculate
    nAnnualPay = annualPay*(1+PAY_INC);
    payDue = (nAnnualPay-annualPay)/2;
    monSal = nAnnualPay/12;
    
    //Output the results
    cout<<"RetroActive Pay Due: $"<<payDue<<endl;
    cout<<"New Annual Salary:   $"<<nAnnualPay<<endl;
    cout<<"New Monthly Salary:  $"<<monSal<<endl;
    //Exit
    return 0;
}

