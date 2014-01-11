/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 7, 2014, 8:31 AM
 * Calculate the distance an object will fall given the input time in sec
 * d=1/2at^2
 * G = 32.174ft/sec^2
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants
const float GRAV = 32.174;//acceleration due to gravity in ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    float time, dist;//time in seconds , distance in ft
    
    //get time input
    cout<<"Input time in seconds:"<<endl;
    cin>>time;
    
    //calculate distance fallen
    dist = (GRAV*time*time)/2;
    
    //Output result
    cout<<"Distance fallen is: "<<dist<<"ft"<<endl;
    return 0;
}