//
//  main.cpp
//  day11-2d-arrays
//
//  Created by Mathurah Ravigulan on 2020-04-19.
//  Copyright © 2020 Mathurah Ravigulan. All rights reserved.
//
//
//TASK:
//Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sim/

//Input Format
//There are 6 lines of input, where each line contains 6 space-separated integers describring 2D Array A.
//Every value in A will be in the inclusive range of -9 to 0.

//OUTPUT:
//Print the largest (maximum) hourglass sum found in A.

#include <iostream>
using namespace std;
//function declaration
int sum(int array[6][6], int row, int col);

//main program
int main() {
 
    //inputs array
    int array[6][6];
    for (int row=0; row<6; row++){
        for(int col=0; col<6; col++){
            cin >> array[row][col];
        }
    }
    
    //checking for which hourglass sums are bigger
    int hourglass = -9 * 7;

    for(int row=0; row<4; row++){
        for(int col=0; col<4; col++){
            int max = sum(array, row, col);
            if(max > hourglass)
                hourglass = max;
        }
    }
    
    cout <<hourglass<< endl;
    return 0;
}

int sum(int array[6][6], int row, int col) {
     int hourglass = array[row][col];
        hourglass += array[row][col +1];
        hourglass += array[row][col +2];
        hourglass += array[row +1][col +1];
        hourglass += array[row+2][col];
        hourglass += array[row +2][col +1];
        hourglass += array[row +2][col +2];
        return hourglass;
    }

