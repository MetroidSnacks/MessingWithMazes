#include <iostream>
#include <string>
#include "Node.cpp"


using namespace std;


int main(){
	cout << "Hello World!" << endl;

	Node a = Node("a");
	Node b = Node("b");
	
	cout << a.toString() << endl;
	cout << b.toString() << endl;

	cout << &a << endl;
	cout << &b << endl;

	cout << "creating relationship" << endl;
	a.setRight(&b);
	b.setLeft(&a);

	cout << "The node to the right of a is: " << (*a.getRight()).toString() << endl;
	cout << "The node to the left of b is: " << (*b.getLeft()).toString() << endl;
	


	return 0;
}
