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
    // Default Constructor
    Tree();
    
   
    bool contains(T value);
    node<T>* findMin(node<T>* t) const;
    const int size();
    int height();
    void insert(int value);
    void printInOrder();
    void printPostOrder();
    void printPreOrder();
    void remove(T value);
    
    // Other Functions to Implement
    // remove
    // find min
    // find max
    
    
private:
    
    std::shared_ptr<node<T>> root;
    int numberOfItems;

    bool contains(std::shared_ptr<node<T>> &parent, T value);
    int height(std::shared_ptr<node<T>>& parent);
    void insert( std::shared_ptr<node<T>> &parent, T &value);
    void printInOrder(std::shared_ptr<node<T>> root);
    void printPostOrder(std::shared_ptr<node<T>> root);
    void printPreOrder(std::shared_ptr<node<T>> root);
    void remove(std::shared_ptr<node<T>> &parent,T& value);
};
#include "Tree.cpp"
#endif /* Tree_hpp */
