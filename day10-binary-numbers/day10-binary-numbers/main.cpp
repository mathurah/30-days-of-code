//
//  main.cpp
//  day10-binary-numbers
//
//  Created by Mathurah Ravigulan on 2020-04-18.
//  Copyright © 2020 Mathurah Ravigulan. All rights reserved.
//

//TASK
//Given a base 10 integer, n, convert it to binary. Then find and print the base 10 integer denoating the maximum number of consecutive 1's in n's binary representation
#include <iostream>
#include <cstring>
using namespace std;
//function declarations
string convertBinary(int n);
int oneCount(string binary);

int main() {
//input
    int n;
    int ones;
    string binary;
    cin>> n;
    binary = convertBinary(n);
    ones = oneCount(binary);
    cout << ones << endl;
    return 0;
}

//function to convert decimal number to a string holding the binary numbers
string convertBinary(int n) {
    string binary;
    while(n!=0) {
        binary = (n%2==0? "0": "1")+binary;
        n/=2;
    }
    return binary;
}

//function to count the number of consectutive ones in the string
int oneCount(string binary){
    int temp = 0; //temporary variable to count size
    int bigger = 0; //compared with the temp value
    //iterate through the elements in the string and count the number of 1s beside each other
    for (int i=0; i<= binary.length(); i++){
        if(binary[i] == '1'){
            temp ++;
        }
        else if(binary[i] =='0'){
            if(temp > bigger) {
                bigger = temp;
            }
            temp = 0;
            
        }
        
    }
    if (temp >bigger) {
        bigger = temp;
    }
    return bigger;
}
