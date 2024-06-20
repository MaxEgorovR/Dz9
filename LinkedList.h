#pragma once
#include "Node.h"

template <typename T>

class LinkedList {
	Node<T> head;

	Node<T> back;

public:
	LinkedList(){}

	LinkedList(Node<T> head) :head(head), back(head) {}

	LinkedList(Node<T> head, Node<T> back) :head(head), back(back) {}

	void add(T val) {
		std::shared_ptr<Node<T>> newNode = std::make_shared<Node<T>>(val);
		std::shared_ptr<Node<T>> cur = std::make_shared<Node<T>>(this->head);
		while (cur->next != nullptr) {
			cur = cur->next;
		}
		cur->next = newNode;
		back = newNode;
	}

	bool remove(T val) {
		std::shared_ptr<Node<T>> cur = std::make_shared<Node<T>>(this->head);
		if (cur->data == val) {
			if (this->head == this->back) {
				this->back = this->back->naxt;
			}
			this->head = this->head->next;
			return true;
		}
		else {
			while (cur->next != nullptr) {
				if (cur->next->data == val) {
					if (cur->next->next == nullptr) {
						cur->next = nullptr;
						this->back = cur->next;
						return true;
					}
					else {
						cur->next = cur->next->next;
						return true;
					}
				}
				cur = cur->next;
			}
		}
		return false;
	}

	Node* find(T val) {
		Node<T>* search = new Node<T>(this->head);
		while (search->next != nullptr) {
			if (search->data == val) {
				return search;
			}
			search = search->next;
		}
		return nullptr;
	}

	void printList() {
		std::shared_ptr<Node<T>> cur = std::make_shared<Node<T>>(this->head);
		while (cur->next != nullptr) {
			std::cout << cut->data << " ";
			cur = cur->next;
		}
		std::cout << std::endl;
	}
};