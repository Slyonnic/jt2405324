/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Class#: 40375
 * Created on January 16, 2014, 10:14 AM
 * Savitch_8thEd_Chapter 2 Problem 19
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    int ex, totScr = 0, actScr = 0;
    
    //Prompt for data
    cout<<"How many exercises to input?"<<endl;
    cin>>ex;
    
    for(int i = 1; i <= ex; i++){
        int temp;
        cout<<"Score received for exercise "<<i<<": ";
        cin>>temp;
        actScr += temp;
        cout<<"Total points possible for exercise "<<i<<": ";
        cin>>temp;
        totScr += temp;
        cout<<endl<<endl;
    }
    //Output result
    cout<<"Your total is "<<actScr<<" out of "<<totScr<<", or "
            <<(static_cast<float>(actScr)/totScr)*100<<"%."<<endl;
    //Exit
    return 0;
}

