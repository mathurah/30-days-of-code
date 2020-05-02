//
//  main.cpp
//  day15-linked-list
//
//  Created by Mathurah Ravigulan on 2020-05-01.
//  Copyright © 2020 Mathurah Ravigulan. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cstddef>

//TASK
//Complete the insert function in our editor so that it creates a new Node (pass data as the node constructor argument) and inserts it at the tail of the linked list referenced by the head paratemr. Once the new node is added, return the reference to the head node

class Node
{
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

class Solution {
public:
    Node* insert(Node *head, int data)
    {
        Node* newnode= new Node (data);
        //If the list is empty, create a new node

        if(head ==NULL ){
            return newnode;
        }
        //If the list is not empty, start at the head and follow the links until you find the end of the list
        Node* it = head;
        while(it-> next!=NULL){
            it = it-> next;
        }
        //Then, set the end of the list to point to the new node
        it-> next = newnode;
        return head;
        
        
        //Complete this method
    }

};
int main() {
  
    return 0;
}
