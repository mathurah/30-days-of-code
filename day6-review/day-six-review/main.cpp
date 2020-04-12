#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//OBJECTIVE:
//Today we're expanding our knowledge of Strings and combining it with what we've already learned about loops.

//TASK:
//Given a string,S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

//INPUT FORMAT
//The first line contains an integer,  (the number of test cases).
//Each line  of the  subsequent lines contain a String,

int main() {
    int T;
    cin >> T;
    
    //inputting the number of strings based on the integer
    for(int t = 0; t <T; t++){
        char s[10000];
        cin >> s;
        
        for(int i =0; i <strlen(s); i +=2){
            cout << s[i];
        }
        cout << " ";
        for(int i =1; i <strlen(s); i +=2){
                 cout << s[i];
             }
        cout << " " <<endl;

    }

    return 0;
}

