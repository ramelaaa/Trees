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

class node{
public:
    node(int newValue);
    int value;
    std::shared_ptr<node> left;
    std::shared_ptr<node> right;
};

#endif /* node_hpp */
