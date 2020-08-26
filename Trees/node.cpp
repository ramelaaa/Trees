//
//  node.cpp
//  Trees
//
//  Created by Ramela Ramnauth on 8/25/20.
//  Copyright © 2020 Ramela Ramnauth. All rights reserved.
//
#ifndef node_impl
#define node_impl
#include "node.hpp"

template <class T>
node<T>::node(const T& newValue){
    value = newValue;
    left = nullptr;
    right = nullptr;
}


#endif
