//
//  Tree.cpp
//  Trees
//
//  Created by Ramela Ramnauth on 8/25/20.
//  Copyright © 2020 Ramela Ramnauth. All rights reserved.
//

#include "Tree.hpp"
#include "node.hpp"
#include <iostream>
// Public Methods
Tree::Tree(){
    root = nullptr;
    numberOfItems = 0;
}

void Tree::insert(int value){
    insert(root,value);
}

int Tree::getNumberOfItems(){
    return numberOfItems;
}

void Tree::printInOrder(){
    printInOrder(root);
}

void Tree::printPreOrder(){
    printPreOrder(root);
}

void Tree::printPostOrder(){
    printPostOrder(root);
}

// Private Methods
void Tree::insert(NodePointer &parent, int &value){
    if (parent == nullptr){
        parent.reset(new node(value));
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
void Tree::printInOrder(NodePointer root){
    if (root == nullptr) {
        
    }else{
        printInOrder(root->left);
        std::cout << root->value << std::endl;
        printInOrder(root->right);
    }
}

void Tree::printPostOrder(NodePointer root){
    if(root == nullptr){
        
    }else{
        printInOrder(root->left);
        printInOrder(root->right);
        std::cout << root->value << std::endl;
    }
}

void Tree::printPreOrder(NodePointer root){
    if(root == nullptr){
        
    }else{
        std::cout << root->value << std::endl;
        printInOrder(root->left);
        printInOrder(root->right);
    }
}
