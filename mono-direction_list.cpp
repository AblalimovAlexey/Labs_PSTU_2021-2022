#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next_ptr = NULL;
};

struct List {
	Node* headnode = NULL;
	Node* tailnode = NULL;
};

void push_back(List& list, int& data) {
	Node* newnode = new Node;
	newnode->data = data;
	if (list.headnode == NULL) {
		list.headnode = newnode;
		list.tailnode = newnode;
	}
	else {
		list.tailnode->next_ptr = newnode;
		list.tailnode = newnode;
	}
}

void print_list(List& list) {
	Node* currnode = list.headnode;
	while (currnode != NULL) {
		cout << currnode->data << " ";
		currnode = currnode->next_ptr;
	}
}

void change_list(List& list) {
	Node* currnode = list.headnode;
	Node* pre_node = list.headnode;
	int count = 2;
	list.headnode = list.headnode->next_ptr;
	currnode = list.headnode;
	pre_node = list.headnode;
	while (currnode != NULL) {
        if (count % 2 == 1) {
            pre_node->next_ptr = currnode->next_ptr;
			pre_node = currnode->next_ptr;
        }
        currnode = currnode->next_ptr;
        count++;
	}
}

int main() {
	List list;
	int size;
	cout << "Enter list size: ";
	cin >> size;
	for (int i = 1; i <= size; i++)	{
		push_back(list, i);
	}
	cout << "Check your list: " << endl;
	print_list(list);
	change_list(list);
	cout << endl;
	cout << "Result list: " << endl;
	print_list(list);
	return 0;
}