#pragma once

#include "List.hpp"
#include <iostream>

template<typename T>
class LinkedList: public List<T> {
protected:
    // represents an element in the linked list
    struct Node {
        T value;
        Node *next;

        Node(T v = T(), Node *n = nullptr) :
                value(v), next(n) {
        }
    };

    // a pointer to the front of the list
    Node *head;

public:
    // default constructor
    LinkedList();

    // destructor
    virtual ~LinkedList();

    // add the argument to the end of the list
    virtual void append(const T&) override;

    // remove all elements in the list, resetting to the initial state
    virtual void clear() override;

    // return the element at the given position (argument)
    virtual T getElement(int) const override;

    // return the current length of the list
    virtual int getLength() const override;

    // insert the given element (argument 2) at
    // the given position (argument 1)
    virtual void insert(int, const T&) override {}

    // determine if the list currently empty
    virtual bool isEmpty() const override;

    // remove the element at the given position (argument)
    virtual void remove(int) override {}

    // replace the element at the given position (argument 1) with
    // the value given (argument 2)
    virtual void replace(int, const T&) override;

    // overloaded stream insertion operator to make printing easier
    template<typename U>
    friend std::ostream& operator<<(std::ostream&, const LinkedList<U>&);
};

template<typename T>
LinkedList<T>::LinkedList() :
        head(nullptr) {
}

template<typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template<typename T>
void LinkedList<T>::append(const T &elem) {
    // TODO
}

template<typename T>
void LinkedList<T>::clear() {
    // TODO
}

template<typename T>
T LinkedList<T>::getElement(int position) const {
    // TODO
}

template<typename T>
int LinkedList<T>::getLength() const {
    return this->length;
}

template<typename T>
bool LinkedList<T>::isEmpty() const {
    return this->length == 0;
}

template<typename T>
void LinkedList<T>::replace(int position, const T &elem) {
    // TODO
}

template<typename T>
std::ostream& operator<<(std::ostream &outStream, const LinkedList<T> &myObj) {
    if (myObj.isEmpty()) {
        outStream << "List is empty, no elements to display.";
    } else {
        typename LinkedList<T>::Node *curr = myObj.head;
        while (curr != nullptr) {
            outStream << curr->value;
            if (curr->next != nullptr) {
                outStream << " --> ";
            }
            curr = curr->next;
        }
    }

    return outStream;
}
