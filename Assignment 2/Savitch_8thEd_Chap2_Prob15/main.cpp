/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 18, 2014
 * Savitch 8thEd_Chap2_Prob15
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    float vel, sTemp, eTemp;
    
    //Prompt for user input
    cout<<"What is starting temperature in Celsius?"<<endl;
    cin>>sTemp;
    cout<<"What is ending temperature in Celsius?"<<endl;
    cin>>eTemp;
    
    //Loop and display results
    for(int i = sTemp; i <= eTemp; i++){
        vel = 331.3 + (0.61*i);
        cout<<"At "<<i<<" degrees Celsius the velocity of sound is "<<vel<<" m/s"<<endl;
    }
    
    //Exit
    return 0;
}

