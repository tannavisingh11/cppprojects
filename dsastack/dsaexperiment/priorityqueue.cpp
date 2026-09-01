#include <iostream>
using namespace std;

#define MAX 100
class PriorityQueue {
    int arr[MAX];
    int size;
public:
    PriorityQueue() {
        size = 0;
    }
    void insert(int value) {
        if (size == MAX) {
            cout << "Priority Queue is full!" << endl;
            return;
        }
        int i = size - 1;
        while (i >= 0 && arr[i] < value) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = value;
        size++;
    }
    void display() {
        if (size == 0) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void remove() {
        if (size == 0) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
};
int main() {
    PriorityQueue pq;
    pq.insert(10);
    pq.insert(30);
    pq.insert(5);
    pq.display();
    pq.remove();
    pq.display();
    return 0;
}