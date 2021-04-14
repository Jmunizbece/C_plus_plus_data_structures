#include <iostream>
using namespace std;

class Node {
	public:
		int key;
		int data;
		Node* next;
		Node* previous;

		Node()
		{
			key = 0;
			data = 0;
			next = NULL;
			previous = NULL;
		}

		Node(int k, int d)
		{
			key = k;
			data = d;
		}
};

class DoublyLinkedList {
	public:
		Node* head;

		DoublyLinkedList()
		{
			head = NULL;
		}
		DoublyLinkedList(Node *n)
		{
			head = n;
		}

		Node* nodeExists(int k)
		{
			
		}
}; 

int main()
{

	return 0;
}