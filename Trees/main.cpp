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
    
    Tree<int> tree;
    Tree<int> secondTree;
    vector<int> list{7,2,9,1,8,5,4};
    vector<int> secondList{5,2,8,1,4,7,9};
    for(auto x: list){ tree.insert(x); }
    for(auto x: secondList){secondTree.insert(x);}
    cout << tree.height() << " " << secondTree.height() << endl;
   
    return 0;
}
