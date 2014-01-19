/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 18, 2014
 * Savitch 8thEd Chap2 Prob6
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    int nCap, nPep;
    
    //Prompt for user input
    cout<<"Maximum room capacity?"<<endl;
    cin>>nCap;
    cout<<"Number of people attending the meeting?"<<endl;
    cin>>nPep;
    
    //Calculate and display results
    if(nPep <= nCap){
        cout<<"Room is legal to hold the meeting."<<endl;
        cout<<nCap-nPep<<" more people may legally attend"<<endl;
    }else{
        cout<<"The number of people exceeds the maximum room capacity."<<endl;
        cout<<nPep-nCap<<" more people must be excluded to meet fire"
                " regulations."<<endl;
    }
    
    //Exit
    return 0;
}

