#include <string>
#include <vector>
#include <array>
#include "Graph.hpp"
#include "Node.hpp"

Graph::Graph(int x, int y){
	this -> upperscore = "¯";
	
	//initialize all the nodes
	for(int i =0; i<x; i++){
		vector<Node> row;//(y);
		for( int j =0; j<y; j++){
			row.push_back(Node("o"));
		}
		this -> grid.push_back(row);
	}
	//initialize relationships
		//only do the right and botom ones if possible for each node
	for(unsigned i =0; i<this -> grid.size(); i++){
		for(unsigned j = 0; j<this -> grid[i].size(); j++){
			//check if there is a node to the right
			if(j+1 < this -> grid[i].size()){
				this -> grid[i][j].setNode(Node::RIGHT, &(this -> grid[i][j+1]));
				this -> grid[i][j+1].setNode(Node::LEFT, &(this -> grid[i][j]));
				
				this -> grid[i][j].setRelationship(Node::RIGHT, "|");
				this -> grid[i][j+1].setRelationship(Node::LEFT, "|");
			}
			
			//check bottom
			if(i+1 < this -> grid.size()){
				this -> grid[i][j].setNode(Node::DOWN, &(this -> grid[i+1][j]));
				this -> grid[i+1][j].setNode(Node::UP, &(this -> grid[i][j]));
				
				this -> grid[i][j].setRelationship(Node::DOWN, "-");
				this -> grid[i+1][j].setRelationship(Node::UP, "-");
			}
		}
	}
	
	//init separator bars
	this -> topBar = ""; //std::string('_', y*2+1);
	this -> botBar = "";
	for(int i =0; i< (y*2 +1); i++){
		this -> botBar += this -> upperscore;
		this -> topBar += "_";
	}
	
}

Graph::~Graph(){
}

std::string Graph::toString(){
	std::string retval = this -> topBar + "\n";
	
	for(unsigned i = 0; i < this-> grid.size(); i++){
		std::string row = "|";
		std::string divider = "";
		if(i+1 < this -> grid.size()){
			divider += "|";
		}
		
		for(unsigned j=0; j < this -> grid[i].size(); j++){
			row += this -> grid[i][j].name;
			if(j+1 < this -> grid[i].size()){
				row += (this -> grid[i][j]).getRelationship(Node::RIGHT);
			}
			else{
				row += "|";
			}
			
			//build bottom row if there is bottom stuff
			if(i+1 < this->grid.size()){
				divider += (this -> grid[i][j]).getRelationship(Node::DOWN);
				if(j+1 < this -> grid[i].size()){
					divider += "+";
				}
				else{
					divider += "|";
				}
			}
		}
		retval += row + "\n" + divider + "\n";
		
	}
	
	retval = retval.substr(0, retval.size()-1) + this -> botBar;
	
	return retval;
}
	
void Graph::genMazePrim(){
	// select a random point and make it part of the maze
	//change the name to m
	
	//create a vector <> of frontier edges
		//each frontier edge is an x coord at index 0, y coord at index 1, and direction at index 2
		
	//mark each node as 'f'
	
	//while there are still frontier edges
	
		//select one at random and mark it 'm'
		//remove all nodes from the frontier vector that matched
		//add nodes to the frontier vector that are connnected to 
	
}