//
//  main.cpp
//  day9-recursion
//
//  Created by Mathurah Ravigulan on 2020-04-16.
//  Copyright © 2020 Mathurah Ravigulan. All rights reserved.
//

#include <iostream>
using namespace std;
int factorial(int N);

int main() {
    //Inputs
    int N;
    cin >> N;
    
    int result = factorial(N);
    
    cout << result << endl;
    
    return 0;
}

int factorial(int N) {
    if(N <1)
        return 1;
    else
        return N*factorial(N-1);
}
