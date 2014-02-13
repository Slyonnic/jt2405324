/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Class#: 40375
 * Created on February 5, 2014, 1:54 PM
 * Othello Game
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants
const short COL = 8;

//Function Prototypes
void drawBrd(unsigned short [][COL],short int);//Draws the current state of the board on the console
void drawLine(string);//Draws string across the entire row
void resetBrd(unsigned short [][COL],short);//Resets the board array to starting position
bool takeSpc(unsigned short [][COL],const int&,const int&,const short&,const int&);//Checks and takes space if valid move
bool flip(unsigned short [][COL],const int&,const int&,const short&,const int&);//Flips adjacent tiles if possible
bool inBound(int,int,int);//Checks if cords are in bound of array
bool quadFlip(unsigned short [][COL],const int&,const int&,const short&,const int&,int, int);//Flips subsequent adjacent tiles in-line with quadrant
int swapTurn(int);//Returns the opposite player number
bool gameOver(unsigned short [][COL],const short);//Checks to see if board is full
void calcScore(unsigned short [][COL],const short);//Calculates and displays score

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    const short ROW = 8;    
    unsigned short board[ROW][COL] = {};//Board 0 = empty, 1 = white, 2 = black
    unsigned int row,col;
    int pTurn = 2;//Player turn 1 = white, 2 = black
    //Draw Starting Board
    resetBrd(board, ROW);
    bool loop = true;
    do{
        drawBrd(board, ROW);
        if(pTurn == 1){
            cout<<"White's Move"<<endl;
        }else{
            cout<<"Black's Move"<<endl;
        }
        cout<<"Row: ";
        cin>>row;
        cout<<"Col: ";        
        cin>>col;
        row--;
        col--;
        if(takeSpc(board,row,col,ROW,pTurn))
            pTurn = swapTurn(pTurn);
        //if(row == 9)loop=false;
        if(gameOver(board,ROW))loop=false;
    }while(loop);
    calcScore(board,ROW);
    return 0;
}

//Draws the current state of the board on the console
void drawBrd(unsigned short a[][COL], short row){
    cout<<endl;
    //Draw Line Numbers
    for(int i = 0; i < COL; i++){
        cout<<"    "<<i+1<<"    ";
    }
    cout<<endl;
    //Draw Top Line
    drawLine("_________");    
    cout<<"_"<<endl;
    //Draw all rows
    for(int i = 0; i < row; i++){
        //Draw First line of space
        drawLine("|        ");        
        cout<<"|"<<endl;
        //Check what tile should be there Draw Second Line of space
        for(int j = 0; j < COL; j++){
            switch(a[i][j]){
                case 0://if 0 print blank
                    cout<<"|        ";
                    break;
                case 1://if 1 print white
                    cout<<"|  /::\\  ";
                    break;
                case 2://if 2 print black
                    cout<<"|  /##\\  ";
                    break;
                default:                 
                    break;
            }            
        }
        cout<<"|";
        //line numbers
        cout<<"  "<<i+1<<endl;
        //Check what tile should be there Draw third Line of space
        for(int j = 0; j < COL; j++){
            switch(a[i][j]){
                case 0://if 0 print blank
                    cout<<"|        ";
                    break;
                case 1://if 1 print white
                    cout<<"|  \\::/  ";
                    break;
                case 2://if 2 print black
                    cout<<"|  \\##/  ";
                    break;
                default:                 
                    break;
            }            
        }
        cout<<"|"<<endl;
        drawLine("|________");
        cout<<"|"<<endl;
    }
}

//Draws string across the entire row
void drawLine(string s){
    for(int i = 0; i < COL; i++){
        cout<<s;
    }
}

//Resets the board array to starting position
void resetBrd(unsigned short a[][COL],short ROW){
    //reset entire array to 0
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            a[i][j] = 0;
        }
    }
    //set pre-determined starting positions
    a[3][3] = 1;
    a[3][4] = 2;
    a[4][3] = 2;
    a[4][4] = 1;
}

//Checks to see if space is a valid move
bool takeSpc(unsigned short a[][COL],const int &row,const int &col,const short &ROW,const int &turn){
    //if inBounds
    if(inBound(row,col,ROW)){
        //if space is already taken or not
        if(a[row][col] == 0){
            //if any adjacent tiles are able to be flipped
            if(flip(a, row, col, ROW, turn)){
                a[row][col] = turn;
                return true;
            }else{
                cout<<"Spot cannot flip any adjacent tiles"<<endl;
                return false;
            }            
        }else{
            cout<<"Spot has already been taken"<<endl;
            return false;
        }  
    }else{
        cout<<"Spot is out of bounds"<<endl;
        return false;
    }   
}

//Flips adjacent tiles if possible
bool flip(unsigned short a[][COL],const int &row,const int &col,const short &ROW,const int &turn){    
    bool flipped = false;
    
    //Check all 8 surrounding quadrants to see if any tiles can be flipped
    //Logic here row/col
    //Upper Left Quadrant -1/-1
    if(quadFlip(a,row,col,ROW,turn,-1,-1))flipped = true;
    //Upper Mid Quadrant -1/0
    if(quadFlip(a,row,col,ROW,turn,-1,0))flipped = true;
    //Upper Right Quadrant -1/+1
    if(quadFlip(a,row,col,ROW,turn,-1,1))flipped = true;
    //Right Quadrant 0/+1
    if(quadFlip(a,row,col,ROW,turn,0,+1))flipped = true;
    //Lower Right Quadrant +1/+1
    if(quadFlip(a,row,col,ROW,turn,1,1))flipped = true;
    //Lower Mid Quadrant +1/0
    if(quadFlip(a,row,col,ROW,turn,1,0))flipped = true;
    //Lower Left Quadrant +1/-1
    if(quadFlip(a,row,col,ROW,turn,1,-1))flipped = true;
    //Left Quadrant 0/-1
    if(quadFlip(a,row,col,ROW,turn,0,-1))flipped = true;
    
    //Check if any tiles were flipped and if so return true
    if(flipped){
        return true;
    }else{
        return false;    
    }
}

//Checks if cords are in bound of array
bool inBound(int row,int col,int ROW){
    if(row < ROW && col < COL && row>=0 && col>=0){
        return true;
    }
    return false;
}

//Flips subsequent adjacent tiles in-line with quadrant
bool quadFlip(unsigned short a[][COL],const int &row,const int &col,const short &ROW,const int &turn,int rQI,int cQI){        
    //Check if adjacent space is inbounds and the opposite color
    if(inBound(row+rQI,col+cQI,ROW) && a[row+rQI][col+cQI] == swapTurn(turn)){
        //Check to see if tile is flanked
        bool loop = true;
        int rowInc = rQI;
        int colInc = cQI;
        
        do{
            //Increment to next adjacent space
            rowInc += rQI;
            colInc += cQI;
            
            //check if incremented space is in bounds
            if(inBound(row+rowInc,col+colInc,ROW)){
                //Check if incremented space is empty
                if(a[row+rowInc][col+colInc] != 0){
                    //Check to see if space is same color as current players tile
                    if(a[row+rowInc][col+colInc] == turn){
                        //Space is flanked so flip all tile in between tiles
                        //LOOP HERE TO CHANGE ALL TILES TO turn COLOR
                        while(!(rowInc == rQI && colInc == cQI)){
                            //reverse increment back to original space and flip tiles
                            rowInc -= rQI;
                            colInc -= cQI;
                            a[row+rowInc][col+colInc] = turn;
                        }
                        //return true if any tiles were filpped
                        return true;
                    }
                }else{
                    //Reached an empty space break loop
                    loop = false;
                }
            }else{
                //Went out of bounds break loop
                loop = false;
            }            
        }while(loop);        
    }
    
    return false;
}

//Returns the opposite player number
int swapTurn(int turn){
    if(turn == 1){
        return 2;
    }else{
        return 1;
    }
}

//Checks to see if the game is over by comparing if the board is full
bool gameOver(unsigned short a[][COL],const short ROW){    
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(a[i][j] == 0){
                return false;
            }
        }
    }
    return true;
}

//Calculates and displays score
void calcScore(unsigned short a[][COL],const short ROW){
    int wScore = 0;
    int bScore = 0;
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(a[i][j] == 1){
                wScore++;
            }else if(a[i][j] == 2){
                bScore++;
            }
        }
    }
    cout<<endl;
    cout<<"Black's Score: "<<bScore<<endl;
    cout<<"White's Score: "<<wScore<<endl;
    if(wScore > bScore){
        cout<<"White is the Winner!!!"<<endl;
    }else if(bScore > wScore){
        cout<<"Black is the Winner!!!"<<endl;       
    }else{
        cout<<"Draw Game"<<endl;
    }
}