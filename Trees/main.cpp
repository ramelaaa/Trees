//
//  main.cpp
//  Trees
//
//  Created by Ramela Ramnauth on 8/25/20.
//  Copyright © 2020 Ramela Ramnauth. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cassert>
#include "Tree.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    Tree<int> mytree;
    vector<int> list{7,2,9,1,8,5,4};
    
    for(auto x: list){
        mytree.insert(x);
    }
    
    assert(list.size() == mytree.size());
    assert(mytree.contains(list[1]) == true);
    assert(mytree.contains(23) == false);
    cout << "Height: " << mytree.height() << endl;
    return 0;
}
