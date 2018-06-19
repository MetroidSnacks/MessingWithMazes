#ifndef NODE_H
#define NODE_H

#include <string>

class Node{
	
	public:
		std::string name;
		//There will be at most 4 edges 
		
		static const int UP = 0;
		static const int DOWN = 2;
		static const int LEFT =1;
		static const int RIGHT =3;
		
		/* index reference, 0 is the upper edge or the x-1 and 1 is the right one or the y+1
			 0
			3*1
			 2
		*/
		Node* edges[4];
		std::string relationships[4];
	
		Node(std::string);
		~Node();
		void setNode(int, Node*);
		Node* getNode(int);
		
		void setRelationship(int, std::string);
		std::string getRelationship(int);
		
		std::string toString();

};

#endif
