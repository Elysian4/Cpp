//given a number 'n' print the nxn matrix for the number where numbers are arrnged in a spiral manner.
/*  eg for a n=4 we have 
  1   2   3   4
  12  13  14  5
  11  16  15  6
  10  9   8   7


#include<iostream>
using namespace std;
int main(){
*/

    int matrix[100][100];                     //defining matrix size
    int n=4;                                  //value can be changed
    int row=0,col=0,direction=0;              //three variables that are needed for the movement in the matrix
    
                                              //right-> direction=0;    down->direction=1;      left-> direction=2;   top->direction=3


    int counter=1;                            //holds the values from 1 to n*n

    for(int i=0;i<n;i++){                     // intitializing the matrix values to zero at first
        for(int j=0;j<n;j++){
            matrix[i][j]=0;
        }
    }

    while(counter<=n*n){                      // lopp goes till n*n

        matrix[row][col]=counter;             //assigning value 1 to first element 
        

        if(direction==0){
            if (col==n-1 || matrix[row][col+1]>0)   //moves down if it finds next element to be filled or it is the last row
            {
               direction=1;
               row++;                                 
            }
            else{                               //moves right 
                col++;                        
            }
            
        }

        else if(direction==1){
            if(row==n-1 || matrix[row+1][col]>0){     //moves left if next element is filled or it reaches the last row
                direction=2;
                col--;
            }
            else{                                //moves down
                row++;
            }
        }

        else if(direction==2){
            if(col==0 || matrix[row][col-1]>0){    //moves up if next element is filled or it reaches the last row
                direction=3;
                row--;
            }
            else{                                //moves left
                col--;
            }
        }
        else{
            if(matrix[row-1][col]>0){             //moves right if next element is filled
                direction=0;
                col++;
            }
            else{                               //moves up
                row--;
            }
        }
        counter++;                             // increase the value of the counter

        

    }
    for(int i=0;i<n;i++){                      // print the matrix
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
}
