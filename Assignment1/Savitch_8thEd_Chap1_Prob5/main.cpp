/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 9, 2014
 * Output sum and product of 2 different inputed integers
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare vars
    int int1, int2;
    
    //Prompt and assign for 2 integers
    cout<<"Please enter 2 integers:"<<endl;
    cin>>int1;
    cin>>int2;
    
    //Calculate sum and product and display result
    cout<<"Sum:     "<<int1+int2<<endl;
    cout<<"Product: "<<int1*int2<<endl;
    //Exit
    return 0;
}

