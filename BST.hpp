#ifndef BST_hpp
#define BST_hpp

template <typename T>
struct Node {
    T value;
    Node* left = nullptr;
    Node* right = nullptr;
};

template <typename T>
class BST {
public:
    BST();
    ~BST();
    void insert(int inputInt);
    bool isContain(int inputInt);
    int size();

private:
    Node<T>* root_;
    Node<T>* insert(int inputInt, Node<T>* parentNode);
    bool isContain(int inputInt, Node<T>* parentNode);
    int count_;
};

#include "BST.cpp"
#endif