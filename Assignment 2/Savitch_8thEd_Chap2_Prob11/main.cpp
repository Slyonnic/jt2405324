/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 18, 2014
 * Savitch 8thEd Chap2 Prob11
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    int sumPos, sumNeg, sumAll, nPos = 0, nNeg = 0;
    float avgPos, avgNeg, avgAll;
    
    //Loop 10 times and prompt user for numbers
    for(int i = 0; i < 10; i++){
        int temp;
        cout<<"Please input a positive negative or zero number: ";
        cin>>temp;
        sumAll += temp;
        if(temp > 0){
            sumPos += temp;
            nPos++;
        }else if(temp < 0){
            sumNeg += temp;
            nNeg++;
        }
    }
    //Calc Averages
    avgPos = static_cast<float>(sumPos)/nPos;
    avgNeg = static_cast<float>(sumNeg)/nNeg;
    avgAll = static_cast<float>(sumAll)/10;
    //Display Results
    cout<<endl;
    cout<<"Sum of Positive Numbers:     "<<sumPos<<endl;
    cout<<"Average of Positive Numbers: "<<avgPos<<endl;
    cout<<"Sum of Negative Numbers:     "<<sumNeg<<endl;
    cout<<"Average of Negative Numbers: "<<avgNeg<<endl;
    cout<<"Sum of All Numbers:          "<<sumAll<<endl;
    cout<<"Average of All Numbers: "<<avgAll<<endl;
    //Exit
    return 0;
}

