//
//  main.cpp
//  deloitte-coding-challenge-2
//
//  Created by Mathurah Ravigulan on 2020-04-20.
//  Copyright © 2020 Mathurah Ravigulan. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string name;
    cin >> name;
    string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    int value;
    for(int i =0; i< name.length(); i++) {
        value += alphabet[i];

        
    }
    cout << value; 
    return 0;
}

