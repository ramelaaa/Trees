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

template<class T>
Tree<T>::Tree(){
    root = nullptr;
    numberOfItems = 0;
}

template<class T>
bool Tree<T>::contains(T value){
    return contains(root, value);
}

template<class T>
std::shared_ptr<node<T>> Tree<T>::findMax(std::shared_ptr<node<T>>parent){
    if( parent != nullptr){
        while(parent->right != nullptr ){
            parent = parent->right;
        }
    }
    return parent;
}

template<class T>
std::shared_ptr<node<T>> Tree<T>::findMin(std::shared_ptr<node<T>> parent){
    if(parent == nullptr){
        return nullptr;
    }
    if(parent->left == nullptr){
        return parent;
    }
    return findMin(parent->left);
}

template<class T>
bool Tree<T>::contains(std::shared_ptr<node<T>> &parent, T value){
    if (parent == nullptr){
        return false;
    }else if(value < parent->value){
        return contains(parent->left,value);
    }else if(value > parent->value){
        return contains(parent->right,value);
    }else{
        return true; // Match found!
    }
}

template<class T>
const int Tree<T>::size(){
    return numberOfItems;
}

template<class T>
int Tree<T>::height(){
    return height(root);
}

template<class T>
int Tree<T>::height(std::shared_ptr<node<T>>& parent){
    if(parent == nullptr){
        return -1;
    }
    return 1+std::max(height(parent->left),height(parent->right));
}
template<class T>
void Tree<T>::insert(int value){
    insert(root,value);
}

template<class T>
void Tree<T>::insert(std::shared_ptr<node<T>> &parent, T &value){
    if (parent == nullptr){
        parent.reset(new node<T>(value));
        numberOfItems++;
    }else if(value < parent->value){
        insert(parent->left,value);
    }else if(value > parent->value){
        insert(parent->right,value);
    }else{
        // duplicate - do nothing!
    }
}


template<class T>
void Tree<T>::printInOrder(){
    printInOrder(root);
}

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
void Tree<T>::printPostOrder(){
    printPostOrder(root);
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
void Tree<T>::printPreOrder(){
    printPreOrder(root);
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
template<class T>
void Tree<T>::remove(T value){
    remove(root,value);
}

template <class T>
void Tree<T>::remove(std::shared_ptr<node<T>> &parent, T &value){
    if(parent == nullptr){
        return;
    }else if(value < parent->value){
        remove(parent->left, value);
    }else if(value > parent->value){
        remove(parent->right, value);
    }//two children
    else if(parent->left != nullptr && parent->right != nullptr){
        parent->value = findMin(parent->right)->value;
        remove(parent->right,parent->value);
    }else{
        std::shared_ptr<node<T>> oldnode = parent;
        parent = (parent->left != nullptr) ? parent->left : parent -> right;
        numberOfItems--;
    }
}


#endif /* Tree_cpp */
