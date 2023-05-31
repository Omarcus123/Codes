#include <iostream>
#include <queue>
using namespace std;

void printQueue (queue<int> queue) {
    while (!queue.empty()) {
        cout << queue.front() << endl;
        queue.pop();
    }
}

int main () {
    /* A Queue has FIFO (First In First Out) data structure, this out of it like a line
    myQueue.push() - pushes a element to the end of the queue
    myQueue.pop() - removes a element from the front of the queue
    myQueue.size() - displays the size of the queue
    myQueue.front() - displays the element that's in the front of the queue
    myQueue.back() - displays the element that's in the back of the queue
    myQueue.empty() - returns true or false if the queue is empty or not
    */
    queue<int> myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    
    cout << "Size is: " << myQueue.size() << endl;
    cout << "First Element is: " << myQueue.front() << endl;
    cout << "Last Element is: " << myQueue.back() << endl;
    
    printQueue(myQueue);
    
    
    return 0;
}
