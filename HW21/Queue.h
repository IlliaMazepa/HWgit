#pragma once
#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class Node {
public:
	T info;
	Node* next;

	Node(T a) {
		info = a;
		next = nullptr;
	}
};

template <typename U>
class Queue
{
	Node<U>* head;
	Node<U>* tail;

public:
	Queue() {
		head = tail = nullptr;
	}
	~Queue() {
		
	}
	bool Empty() {
		if (head == nullptr)return true;
		else return false;
	}
	bool Top(U item) {
		return head->next->info;
	}
	void push(U item) {
		
		Node<U>* el = new Node<U>(item);
		if (Empty())head = tail = el;
		tail->next = el;
		tail = el;
		tail->next = NULL;
	}
	void pop() {
		if (Empty()) {
			cout << "Empty";
		}
		else head = head->next;
	}
	void show() {
		Node<U>* p = head;
		for (;p != nullptr;) {
			cout << p->info << " ";
			p = p->next;
		}
		cout << endl;
	}
};

