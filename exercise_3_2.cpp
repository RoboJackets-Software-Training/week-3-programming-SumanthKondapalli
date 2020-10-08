#include "exercise_3_2.hpp"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::add_to_front(std::string name) {

	if (head == nullptr) {

		head = new Node();
		head.name = name;

	} else {

		Node temp = head;
		head = new Node();
		head.name = name;
		head.next = temp;

	}

    return;
}

void LinkedList::add_to_back(std::string name){

	if (head == nullptr) {

		head = new Node();
		head.name = name;

	} else {

		Node *temp = &head;

		while (temp.next != nullptr) {

			temp = &temp.next;

		}

		Node insert = new Node();
		insert.name = name;

		*temp.next = insert;

	}


    return;
}

void LinkedList::add_at_index(std::string name, int index) {

	Node *temp = &head;

	for (int i = 0; i < index; i++) {

		temp = &temp.next;

	}

	Node insert = new Node();
	insert.name = name;

	if(*temp == nullptr) {

		temp = insert;

	} else {

		insert.next = *temp.next;
		*temp = insert;

	}


    return;
}

void LinkedList::remove_from_front() {
    return;
}

void LinkedList::remove_from_back() {
    return;
}

void LinkedList::print_names() {
    return;
}
