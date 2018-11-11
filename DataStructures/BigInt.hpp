//
//  BigInt.hpp
//  DataStructures
//
//  Created by Matthew Johnson on 2018-11-10.
//  Copyright © 2018 Matthew Johnson. All rights reserved.
//

#ifndef BigInt_hpp
#define BigInt_hpp
#pragma once
#include <stdio.h>
class BigInt{
    
    struct Node {
        Node * next = nullptr;
        int val = 0;
    };

private:
    Node * root;
    int clean(Node * curr);
    Node * getMultiplication(Node * rootA, Node * rootB);
    Node * cleanRoot(Node * root);
    void printList(Node * root);
    //BUG: longer list of the two must be the latter
    //bug removed???
    void deleteList(Node * root);
    
public:
    void pushBack(int val);
    void popBack();
    void printList();
    void cleanRoot();
    BigInt * getMultiplication(BigInt & rootA);


};
#endif /* BigInt_hpp */
