//OBJECTIVE
//Key value pair mappings

#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main() {
    // denoting the number of entries in the ohone group
    map<string, string> phoneList;

    int n;
    cin >> n;
    
    //for loop creating entries based on n and storing it to mapped values
    //reading names and numbers, adding it to phonebook
    for(int i =0; i<n; i++){
        string name;
        string number;
        cin >> name;
        cin >> number;
        phoneList[name] =number;
    }
    //Putting in queries
    map<string, string>::iterator it;
    string search;
    
    while(cin >> search){
        it = phoneList.find(search);
        
        if (it != phoneList.end() ) {//if key is found in phone book
        cout << it ->first << "=" << it->second << endl;
        }else {// if the iterator hits the end of the phone book
            cout << "Not found" << endl;
        }

    }
   
    return 0;
   
}
