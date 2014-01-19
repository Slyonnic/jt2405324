/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 18, 2014
 * Savitch 8thEd Chap2 Prob10
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    int sumPos, sumNeg, sumAll;
    
    //Loop 10 times and prompt user for numbers
    for(int i = 0; i < 10; i++){
        int temp;
        cout<<"Please input a positive negative or zero number: ";
        cin>>temp;
        sumAll += temp;
        if(temp > 0){
            sumPos += temp;
        }else{
            sumNeg += temp;
        }
    }
    
    //Display Results
    cout<<"Sum of Positive Numbers: "<<sumPos<<endl;
    cout<<"Sum of Negative Numbers: "<<sumNeg<<endl;
    cout<<"Sum of All Numbers:      "<<sumAll<<endl;
    //Exit
    return 0;
}

