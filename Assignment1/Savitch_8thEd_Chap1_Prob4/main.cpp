/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Created on January 9, 2014
 * Notice logical error due to addition
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
    cout<<"Number of Peas per Pod?"<<endl;
    cin>>nPeas;
    
    //Calculate result
    total = nPods+nPeas;//changed to addition
    
    //Display Results
    cout<<"Total Peas: "<<total<<endl;//incorrect
    cout<<"Good-bye\n";
    return 0;
}

