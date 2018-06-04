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

void Node::setLeft(Node* n){
	this -> edges[3] = n;
}
void Node::setRight(Node* n){
	this -> edges[1] = n;
}
void Node::setUp(Node* n){
	this -> edges[0] = n;
}
void Node::setDown(Node* n){
	this -> edges[2] = n;
}

Node* Node::getLeft(){
	return this -> edges[3];
}
Node* Node::getRight(){
	return this -> edges[1];
}
Node* Node::getUp(){
	return this -> edges[0];
}
Node* Node::getDown(){
	return this -> edges[2];
}
