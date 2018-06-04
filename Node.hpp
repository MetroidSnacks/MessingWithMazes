#ifndef NODE_H
#define NODE_H

#include <string>

class Node{
	
	public:
		std::string name;
		//There will be at most 4 edges 
		Node* edges[4];
		/* index reference, 0 is the upper edge or the x-1 and 1 is the right one or the y+1
			 0
			3*1
			 2
		*/
	
		Node(std::string);
		~Node();
		void setLeft(Node*);
		void setRight(Node*);
		void setUp(Node*);
		void setDown(Node*);
		Node* getLeft();
		Node* getRight();
		Node* getUp();
		Node* getDown();
		std::string toString();

};

#endif
