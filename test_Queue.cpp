#include <iostream>
#include "priority_queue.h"

int main(int argc, char* argv[]) {
    PriorityQueue<int> pQueue(20);

    pQueue.push(10);
    pQueue.push(1);
    pQueue.push(20);
    pQueue.push(5);

    int size = pQueue.size();
    std::cout << "size: " << size << "\n";

    std::cout << pQueue.top() << "\n";
    pQueue.pop();
    std::cout << pQueue.top() << "\n";

    if(pQueue.empty()) {
        std::cout << "empty\n";
    } else {
        std::cout << "not empty\n";
    }

    size = pQueue.size();
    std::cout << "size: " << size << "\n";
  
  return 0;
}