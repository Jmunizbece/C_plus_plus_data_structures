#include <iostream>
#include <string>

class Stack{
	private:
		int top;
		int arr[5];

	public:
		Stack ()
		{
			top = -1;
			for (int x = 0; x < 5; x += 1) {
				arr[x] = 0; 
			}
		}

		bool isEmpty() {
			if(top == -1)
				return true;
			else
				return false;
		}

		bool isFull() {
			if(top == 4)
				return true;
			else
				return false;
		}

		void push(int val) {
			if(isFull) {
				std::cout << "Stack Overflow" << std::endl;
			} else {
				top += 1; 
				arr[top] = val;
			}
		}

		int pop() {
			if(isEmpty) {
				std::cout << "Stack Underflow" << std::endl;
				return 0;
			} else {
				int popValue = arr[top];
				arr[top] = 0;
				top -= 1;
				return popValue;
			}
		}

		int count() {
			return(top + 1);
		}

		int peek(int position) {
			if(isEmpty) {
				std::cout << "Stack Underflow" << std::endl;
				return 0;
			} else {
				return arr[position];
			}
		}

		void change(int position, int value) {
			arr[position] = value;
			std::cout << "The value of " << value << "has been added to position at index of " << position << std::endl;
		}

		void display() {
			std::cout << "All values in the Stack are" << std::endl;
			for(int x = 4; x > 0; x -= 1) {
				std::cout << arr[x] << std::endl;
			}
		}

}; 

int main()
{
	Stack s1;
	int option, position, value;

	do {
		std::cout << "Which operation would you like to perform? Select Option number. Enter 0 to exit." << std::endl;
		std::cout << "1. Push" << std::endl;
		std::cout << "2. Pop" << std::endl;
		std::cout << "3. isEmpty()" << std::endl;
		std::cout << "4. isFull()" << std::endl;
		std::cout << "5. peek()" << std::endl;
		std::cout << "6. count()" << std::endl;
		std::cout << "7. change()" << std::endl;
		std::cout << "8. display()" << std::endl;
		std::cout << "9. Clear Screen" << std::endl; 
		
	} while(option != 0) {
	}

	return 0;
}