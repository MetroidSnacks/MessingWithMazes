#ifndef GRAPH_H
#define GRAPH_H

//class Node;

#include <string>
#include <vector>
#include "Node.hpp"

using namespace std;

class Graph{
	
	private:
		string topBar;
		string botBar;
	
		string upperscore;
	public:
		vector< vector<Node> > grid;
	
		Graph(int x, int y);
		~Graph();
		
		string toString();
		
		void genMazePrim();

};

#endif