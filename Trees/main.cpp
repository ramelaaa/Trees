//
//  main.cpp
//  Trees
//
//  Created by Ramela Ramnauth on 8/25/20.
//  Copyright © 2020 Ramela Ramnauth. All rights reserved.
//

#include <iostream>
#include "Tree.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    Tree<int> mytree;
    
    mytree.insert(7);
    mytree.insert(2);
    mytree.insert(9);
    int x = mytree.getNumberOfItems();
    cout <<"There are " << x << " elements." <<endl;
    mytree.printInOrder();
    mytree.printPreOrder();
    mytree.printPostOrder();
    
    return 0;
}
