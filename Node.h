#pragma once
#include <iostream>
#include <string>

template <typename T>

class Node {
public:
	T data;

	std::shared_ptr<Node<T>> next = std::make_shared<Node<T>>(nullptr);

	Node() {}

	Node(T data):data(data),next(nullptr){}


};