#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
      public:
      int maximumDifference;

    //constructor
    Difference(vector<int> elements){
        this-> elements = elements;
    }
    
    //function - finds the maximum absolute difference between any 2 numbers and stores it in the maximum difference instance variable
    
    //N - number of non-negative integer
    void computeDifference() {
        maximumDifference = 0;
        for(vector<int>::iterator it1 = elements.begin(); it1 !=elements.end(); it1++){
            for(vector<int>::iterator it2 = it1+1; it2< elements.end(); it2++){
                maximumDifference=max(maximumDifference, abs(*it1 - *it2));
                //max function uses algorithm library, used to find the largest value from two given values, accepts two values and returns the largest value and if both the values are the same it returns the first value
            }
        }
    }

}; // End of Difference class
