#include "BST.hpp"

template <typename T>
BST<T>::BST() {
    root_ = nullptr;
    count_ = 0;
}

template <typename T>
BST<T>::~BST() {
    root_ = nullptr;
    count_ = 0;
}

template <typename T>
void BST<T>::insert(int inputInt) {
    Node<T>* tempNode = new Node<T> { inputInt };
    if(root_ == nullptr) {
        root_ = tempNode;
    } else {
        if(root_ -> value >= inputInt) {
            root_ -> left = insert(inputInt, root_ -> left);
        } else {
            root_ -> right = insert(inputInt, root_ -> right);
        }
    }
    count_++;
}

template <typename T>
Node<T>* BST<T>::insert(int inputInt, Node<T>* parentNode) {
    Node<T>* tempNode = new Node<T> { inputInt };
    if(parentNode == nullptr) {
        return tempNode;
    } else {
        if(parentNode -> value >= inputInt) {
            parentNode -> left = insert(inputInt, parentNode -> left);
        } else {
            parentNode -> right = insert(inputInt, parentNode -> right);
        }
    }
    return parentNode;
}

template <typename T>
bool BST<T>::isContain(int inputInt) {
    bool result = false;
    if(root_ == nullptr) {
        result = false;
    } else {
        if(root_ -> value > inputInt) {
            return isContain(inputInt, root_ -> left);
        } else if(root_ -> value < inputInt) {
            return isContain(inputInt, root_ -> right);
        } else {
            result = true;
        }
    }
    return result;
}

template <typename T>
bool BST<T>::isContain(int inputInt, Node<T>* parentNode) {
    if(parentNode == nullptr) {
        return false;
    } else {
        if(parentNode -> value > inputInt) {
            return isContain(inputInt, parentNode -> left);
        } else if(parentNode -> value < inputInt) {
            return isContain(inputInt, parentNode -> right);
        } else {
            return true;
        }
    }
    return false;
}

template <typename T>
int BST<T>::size() {
    return count_;
}