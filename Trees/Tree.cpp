//
//  Tree.cpp
//  Trees
//
//  Created by Ramela Ramnauth on 8/25/20.
//  Copyright © 2020 Ramela Ramnauth. All rights reserved.
//

#ifndef Tree_IMPL
#define Tree_IMPL

#include "Tree.hpp"
#include "node.hpp"
#include <iostream>

// Public Methods
template<class T>
Tree<T>::Tree(){
    root = nullptr;
    numberOfItems = 0;
}

template<class T>
void Tree<T>::insert(int value){
    insert(root,value);
}

template<class T>
int Tree<T>::getNumberOfItems(){
    return numberOfItems;
}

template<class T>
void Tree<T>::printInOrder(){
    printInOrder(root);
}

template<class T>
void Tree<T>::printPreOrder(){
    printPreOrder(root);
}

template<class T>
void Tree<T>::printPostOrder(){
    printPostOrder(root);
}

// Private Methods
template<class T>
void Tree<T>::insert(std::shared_ptr<node<T>> &parent, int &value){
    if (parent == nullptr){
        parent.reset(new node<T>(value));
        if(value == parent->value){
            numberOfItems++;
        }
    }else if(value < parent->value){
        insert(parent->left,value);
    }else if(value > parent->value){
        insert(parent->right,value);
    }else{
        // do nothing...
        // duplicate
    }
}

// Private Print Methods
template<class T>
void Tree<T>::printInOrder(std::shared_ptr<node<T>> root){
    if (root == nullptr) {
        
    }else{
        printInOrder(root->left);
        std::cout << root->value << std::endl;
        printInOrder(root->right);
    }
}

template<class T>
void Tree<T>::printPostOrder(std::shared_ptr<node<T>> root){
    if(root == nullptr){
        
    }else{
        printInOrder(root->left);
        printInOrder(root->right);
        std::cout << root->value << std::endl;
    }
}

template<class T>
void Tree<T>::printPreOrder(std::shared_ptr<node<T>> root){
    if(root == nullptr){
        
    }else{
        std::cout << root->value << std::endl;
        printInOrder(root->left);
        printInOrder(root->right);
    }
}

#endif
