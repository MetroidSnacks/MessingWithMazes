#include <iostream>
#include <string>
#include "Node.hpp"
#include <vector>
#include <array>
#include "Graph.hpp"
#include <stdlib.h>
using namespace std;


int main(){

	/*
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
	*/
/*
	vector<int> nums;
	for(int i = 0; i<23; i++){
		if(i%2 == 0){
			nums.insert(nums.begin(), i);
		}
		else{
			nums.push_back(i);
		}
	}
	
	for(unsigned i =0; i< nums.size(); i++){
		cout << nums.at(i) << endl;
	}
	
	
	vector< std::array<int, 5> > twoDChars;
	
	for(unsigned i= 0; i < 5; i++){
		std::array<int, 5> row;
		for(unsigned j = 0; j < 5; j++){
			row[j] = (i+j);
		}
		
		twoDChars.push_back(row);
		
	}
	
	for(unsigned i=0; i<twoDChars.size(); i++){
		for(const int &num : twoDChars[i]){
			cout << num;
		}
		cout << "\n" ;
	}
	*/
	
	//string a = "¯";
	//string a = "￣";
	//cout << (a+a) << endl;
	
	Graph n = Graph(3,8);
	
	cout << n.toString() << endl;
	//cout << string(5, '¯') <<endl;
	
	
	vector < string > frontieredges;
	
	frontieredges.push_back("24|21|1");
	
	int sepOne = frontieredges[0].find("|");
	int sepTwo = frontieredges[0].rfind("|");
	
	cout << sepOne << endl;
	cout << sepTwo << endl;	
	
	cout << "substrings" << endl;
	
	cout << frontieredges[0].substr(0, sepOne) << endl;
	cout << frontieredges[0].substr(sepOne+1, sepTwo-sepOne-1) << endl;
	cout << frontieredges[0].substr(sepTwo+1, frontieredges[0].size() - sepTwo) << endl;
	
	cout << rand() << endl;
	cout << RAND_MAX << endl;
	
	return 0;
}
