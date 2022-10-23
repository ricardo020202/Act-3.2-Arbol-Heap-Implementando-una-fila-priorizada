// =================================================================
//
// File: priority_queue.h
// Author: José Ricardo Rosales Castañeda - A01709449
// Description: This file contains the implementation of a priority 
//              queue using a max heap.
//
// =================================================================

#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <string>
#include <sstream>
#include <iostream>
#include "heap.h"

// =================================================================
// Definition of the PriorityQueue class
// =================================================================
template <class T>
class PriorityQueue {
private:
  Heap<T> heap;

public:
    PriorityQueue(uint);
    ~PriorityQueue();
    void push(T);
    void pop();
    T top();
    bool empty();
    uint size();
};

// =================================================================
// Constructor. Initializes the maximum size of the heap and creates
// the array.
//
// @param sze, the maximum size of the heap.
// =================================================================
template <class T>
PriorityQueue<T>::PriorityQueue(uint sze) : heap(sze) {}

// =================================================================
// Destructor. Deletes the array.
// =================================================================
template <class T>
PriorityQueue<T>::~PriorityQueue() {}

// =================================================================
// Adds a new element to the priority queue.
//
// @param value, the value to be added.
// =================================================================
template <class T>
void PriorityQueue<T>::push(T value) {
    heap.add(value);
}

// =================================================================
// Removes the element with the highest priority.
// =================================================================
template <class T>
void PriorityQueue<T>::pop() {
    heap.remove();
}

// =================================================================
// Returns the element with the highest priority.
// =================================================================
template <class T>
T PriorityQueue<T>::top() {
    T aux = heap.remove();
    heap.add(aux);
    return aux;
}

// =================================================================
// Returns true if the priority queue is empty.
// =================================================================
template <class T>
bool PriorityQueue<T>::empty() {
    return heap.empty();
}

// =================================================================
// Returns the size of the priority queue.
// =================================================================
template <class T>
uint PriorityQueue<T>::size() {
    return heap.length();
}

#endif   