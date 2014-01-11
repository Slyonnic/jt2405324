/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 9, 2014
 * Calculate number of peas per pod
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
    cout<<"Number of Pods?"<<endl;
    cin>>nPods;
    cout<<"Number of Peas per Pod?"<<endl;
    cin>>nPeas;
    
    //Calculate result
    total = nPods*nPeas;
    
    //Display Results
    cout<<"Total Peas: "<<total<<endl;
    return 0;
}

