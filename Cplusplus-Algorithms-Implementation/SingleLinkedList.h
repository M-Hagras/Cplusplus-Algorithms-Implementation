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

template<class T>
LinkedList<T>::LinkedList() :head(NULL){}

template<class T>
LinkedList<T>::~LinkedList(){}

template<class T>
int LinkedList<T>::lenght(){}

template<class T>
T& LinkedList<T>::at(){}

template<class T>
void LinkedList<T>::append(T){


}

template<class T>
void LinkedList<T>::insertAt(int i, T val){}

template<class T>
T LinkedList<T>::deleteAt(int i){}

template<class T>
void LinkedList<T>::displaylist(){}

template <class T>
void LinkedList<T>::clear(){}


