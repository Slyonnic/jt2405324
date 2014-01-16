/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Class#: 40375
 * Created on January 16, 2014, 11:10 AM
 * Savitch_8thEd_Chap2_Prob1
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float CNV_MET_OUC = 35273.92;//Metric Ton to Ounces

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    float boxWOuc, boxWMet, numBox;
    
    //Prompt User
    cout<<"Weight of Box of Cereal in ounces?"<<endl;
    cin>>boxWOuc;
    cout<<endl;
    //Calculations
    boxWMet = boxWOuc/CNV_MET_OUC;
    numBox = CNV_MET_OUC/boxWOuc;
    
    //Display Results
    cout<<"Bow of Cereal in Metric Tons: "<<boxWMet<<endl;
    cout<<"To have 1 Metric Ton of Cereal you would need: "<<numBox<<" boxes"<<endl;
    //Exit
    return 0;
}

