//
//  Tree.hpp
//  Trees
//
//  Created by Ramela Ramnauth on 8/25/20.
//  Copyright © 2020 Ramela Ramnauth. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp
#include <memory>

//#include <stdio.h>
#include "node.hpp"


template <class T>
class Tree{
public:
    Tree();
    void insert(int value);
    int getNumberOfItems();
    
    // Print Methods
    void printInOrder();
    void printPreOrder();
    void printPostOrder();
    
    // Other Functions to Implement
    
    
private:
    
    //Print Methods
    void printInOrder(std::shared_ptr<node<T>> root);
    void printPreOrder(std::shared_ptr<node<T>> root);
    void printPostOrder(std::shared_ptr<node<T>> root);
    
    std::shared_ptr<node<T>> root;
    void insert( std::shared_ptr<node<T>> &parent, int &value);
    int numberOfItems;
};
#include "Tree.cpp"
#endif /* Tree_hpp */
