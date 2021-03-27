//dequeue

#include <iostream>

using namespace std;

class Queue {
	private:
		int front;
		int rear;
		int arr[5];

	public:
		Queue() //default constructor
		{
			front = -1;
			rear = -1;
			for (int x = 0; x < 5; x += 1) {
				arr[x] = 0;
			}
		}

		bool isEmpty()
		{
			if (front == -1 and rear == -1) {
				return true;
			} else {
				return false;
			}
		}

		bool isFull()
		{
			if (rear == 4) {
				return true;
			} else {
				return false;
			}
		}

		void enqueue(int value) {
			if (isFull()) {
				cout << "QUEUE IS FULL" << endl;
				return;
			} else if (isEmpty()) {
				rear = 0;
				front = 0;
				arr[rear] = value;
			} else {
				rear ++;
				arr[rear] = value;
			}
		}

		int dequeue() {
			if (isEmpty()) {
				cout << "QUEUE is EMPTY" << endl;
				return 0;
			} else if (front == rear) {
				int x = arr[front];
				arr[front] = 0;
				front = -1;
				rear = -1;
				return x;
			} else {
				int x = arr[front];
				arr[front] = 0;
				front ++; 
				return x;
			}
		}

		int count() {
			return (rear - front + 1);
		}

		
};