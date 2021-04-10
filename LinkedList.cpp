#include <iostream>

using namespace std;

class Node {
	public:
		int data;
		int key;
		Node* next;

		Node()
		{
			data = 0;
			key = 0;
			next = NULL;
		}

		Node(int k, int d)
		{
			key = k;
			data = d;
		}
}; 

class SinglyLinkedList {
	public:
		Node* head;

		SinglyLinkedList()
		{
			head = NULL;
		}

		SinglyLinkedList(Node *n)
		{
			head = n;
		}
		//1. Check if node exists using key value
		Node* nodeExists(int k)
		{
			Node* temp = NULL;
			Node* ptr = head;

			while (ptr != NULL) 
			{
				if (ptr -> key == k) 
				{
					temp = ptr;
				} 
				ptr = ptr -> next;
			} 
			return temp;
		}

		// 2. Append a node to the list
		void appendnode(Node *n)
		{
			if (nodeExists(n -> key) != NULL) 
			{
				cout << "NODE EXISTS WITH KEY VALUE: " << n->key << ". Input another unique key to append," << endl;
			} 
			else 
			{
				if(head == NULL) 
				{
					head = n;
					cout << "Node Appended" << endl;
				} 
				else 
				{
					Node* ptr = head;
					while (ptr->next != NULL) {
						ptr = ptr->next; 
					}
					ptr->next = n;
					cout << "NODE APPENDED" << endl;
				}
			} 
		}

		// 3. Prepend node to beginning of linked list
		void prependNode(Node *n)
		{
			if (nodeExists(n->key) != NULL) 
			{
				cout << "KEY EXISTS" << endl;
			} 
			else 
			{
				n->next = head;
				head = n;
				cout << "NODE PREPENDED" << endl;
			}
		}

		//4. Insert Node after another node in list
		void appendBetween(int key, Node *n)
		{
			Node* ptr = nodeExists(key);
			if (ptr == NULL) 
			{
				cout << "No Node Exists with that key value" << key << endl;
			} 
			else 
			{
				if (nodeExists(n->key) != NULL) 
				{
					cout << "Node already exists" << endl; 
				} 
				else 
				{
					n->next = ptr->next;
					ptr->next = n;
					cout << "NODE APPENDED" << endl;
				}
			}
		}

		//5. Delete Node by key
		void deleteNodebykey(int k)
		{
			if (head == NULL) 
			{
				cout << "LIST ALREADY EMPTY" << endl;
			} 
			else if (head != NULL) 
			{
				if (head->key == k) 
				{
					head = head->next;
					cout << "Node UNLINKED with keys value" << endl;
				}
				else
				{
					Node* temp = NULL;
					Node* prevptr = head;
					Node* currentptr = head->next;
					while (currentptr != NULL)
					{
						if (currentptr->key == k)
						{
							temp = currentptr;
							currentptr = NULL;
						}
						else {
							prevptr = prevptr->next;
							currentptr = currentptr->next;
						}
					}
					if (temp != NULL)
					{
						prevptr->next = temp->next;
						cout << "NODE UNLINKED with keys value : " << k << endl;
					}
					else
					{
						cout << "NODE DOESN'T EXIST WITH KEY VALUE: " << k << endl;
					}
				}
			}
		}
};

int main()
{

	return 0; 
}