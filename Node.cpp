#include "Node.hpp"
#include <string>

//the Node Constructor
Node::Node(std::string n){
	this -> name = n;
}
//Destructor
Node::~Node(){

}

std::string Node::toString(){
	return "This is a Node " + this -> name;
}


void Node::setNode(int direction, Node* n){
	this -> edges[direction] = n;
}
Node* Node::getNode(int direction){
	return this -> edges[direction];
}
void Node::setRelationship(int direction, std::string status){
	this -> relationships[direction] = status;
}
std::string Node::getRelationship(int direction){
	return this -> relationships[direction];
}
