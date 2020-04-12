#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (1< N <100) {
  
    //if n is odd
    if(N % 2!= 0) {
        cout << "Weird";
    }
    if(N% 2== 0) {
        if(2<= N && N <=5) {
        cout << "Not Weird";
        }

        if(6<= N && N <=20) {
        cout << "Weird";
        }

        if(N>20) {
            cout << "Not Weird";
        }
    }
    }

    return 0;
}

