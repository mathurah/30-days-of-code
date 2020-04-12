//
//  main.cpp
//  day7-array
//
//  Created by Mathurah Ravigulan on 2020-04-12.
//  Copyright © 2020 Mathurah Ravigulan. All rights reserved.
//

#include <iostream>
using namespace std;

//OBJECTIVE
//Learning about the array data structure

//TASK
//Given an array A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.

//INPUT FORMAT
//The first line contains an integer, N (size of the array)
//The second line contains N space separated integers describing array A's elements

//OUTPUT FORMAT
//Print the elements of array A in reverse order as a single line of space-separated numbers

int main() {
    //number of elements we want to hold
    int N;
    cin >> N;
    
    //array declaration
    int A[N];
    
    //inputting elements into the array
    for (int i=0; i <N; i++){
        cin >> A[i];
    }
    
    //printing in reverse order
    for (int i=N-1; i >=0; i--){
           cout << A[i] << " ";
       }
    
    
    return 0;
}
