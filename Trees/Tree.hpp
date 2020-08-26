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
using NodePointer = std::shared_ptr<node>;
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
    void printInOrder(NodePointer root);
    void printPreOrder(NodePointer root);
    void printPostOrder(NodePointer root);
    
    NodePointer root;
    void insert( NodePointer &parent, int &value);
    int numberOfItems;
};

#endif /* Tree_hpp */
