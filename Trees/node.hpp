//
//  node.hpp
//  Trees
//
//  Created by Ramela Ramnauth on 8/25/20.
//  Copyright © 2020 Ramela Ramnauth. All rights reserved.
//

#ifndef node_hpp
#define node_hpp
#include "memory"

//#include <stdio.h>
template <class T>
class node{
public:
    node(const T& newValue);
    T value;
    std::shared_ptr<node> left;
    std::shared_ptr<node> right;
};
#include "node.cpp"
#endif /* node_hpp */
