/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 9, 2014, 8:31 AM
 * Create and catalog errors
 */

//System Libraries//main.cpp:9:10: error: #include expects "FILENAME" or <FILENAME>
#include <iostream> //main.cpp:9:21: fatal error:  iostream: No such file or directory
using namespace std;

//System Constants
const float GRAV = 32.174;

//Function Prototypes

//Execution Begins Here         //main.cpp:18:10: error: expected initializer before ‘int’
int main (int argc, char** argv) {//nbproject/Makefile-impl.mk:39: recipe for target '.build-impl' failed
    //Declare Vars              //main.cpp:18:32: error: expected ‘)’ before ‘{’ token
    float time, dist;
    
    //get time input
    cout<<"Input time in seconds:"<<endl; //main.cpp:23:5: error: ‘cut’ was not declared in this scope
    cin>>time;
    
    //calculate distance fallen
    dist = (GRAV*time*time)/2;
    
    //Output result
    cout<<"Distance fallen is: "<<dist<<"ft"<<endl;//main.cpp:30:33: error: expected ‘;’ before ‘dist’
    return 0;
}//main.cpp:30:33: error: expected ‘;’ before ‘dist’