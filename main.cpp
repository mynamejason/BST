#include "BST.hpp"
#include <iostream>

using namespace std;

int main() {
    BST <int> myBST;

    myBST.insert(10);
    myBST.insert(7);
    myBST.insert(13);
    myBST.insert(5);
    myBST.insert(8);
    myBST.insert(11);
    myBST.insert(20);

    return 0;
}