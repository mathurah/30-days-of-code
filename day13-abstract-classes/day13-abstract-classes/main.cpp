//
//  main.cpp
//  day13-abstract-classes
//
//  Created by Mathurah Ravigulan on 2020-04-28.
//  Copyright © 2020 Mathurah Ravigulan. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Book{
protected:
    string title;
    string author;
    
public:
    //class constructors
    Book(string t,string a){
        title=t;
        author=a;
    }
    //class member functions
     virtual void display()=0;
};

//need to write inherited mybook class
class MyBook: public Book {
public:
    int price;
  //class constructor
    MyBook(string title, string author, int price): Book(title, author){
        this->title = title;
        this->author = author;
        this->price = price;
    }
    //function
    void display(){
        cout <<"Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "Price: " <<this->price <<endl;
    }
};
int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
