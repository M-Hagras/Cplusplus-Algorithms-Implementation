#include<iostream>
using namespace std;

template<class T>
class Node{
	
public:
	T data;
	Node* nxt;
	Node(T val) : data(val), nxt(0){}
	Node() :nxt(0){}
};

template<class T>
class LinkedList{
	Node* head; 
public:
	LinkedList();
	~LinkedList();
	int lenght();
	T& at(int i); 
	void append(T); 
	void insertAt(int i, T val); 
	T deleteAt(int i); 
	void displaylist();
	void clear();
};



