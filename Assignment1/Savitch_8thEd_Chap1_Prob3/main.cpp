/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 9, 2014
 * Notice error due to division of zero
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare vars
    int nPeas, nPods, total;
    
    //Prompt and assign vars
    cout<<"Hello"<<endl;
    cout<<"Number of Pods?"<<endl;
    cin>>nPods;
    cout<<"Number of Peas per Pod? Input a zero"<<endl;
    cin>>nPeas;//input zero
    
    //Calculate result
    total = nPods/nPeas;//changed to division
    
    //Display Results
    cout<<"Total Peas: "<<total<<endl;
    cout<<"Good-bye\n";
    return 0;
}

