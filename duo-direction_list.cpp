#include <iostream>

using namespace std;

struct Node {
	char data;
	Node* prev_ptr = NULL;
	Node* next_ptr = NULL;
};

struct List {
	Node* headnode = NULL;
	Node* tailnode = NULL;
};

void StartList(List& list, int i) {
	Node* newnode = new Node;
	cout << "Enter " << i << " node data(char): ";
	char data;
	cin >> data;
	newnode->data = data;
	if (list.headnode == NULL) {
		list.headnode = newnode;
		list.tailnode = newnode;
		return;
	}
	Node* currentnode = list.tailnode;
	newnode->prev_ptr = currentnode;
	newnode->next_ptr = currentnode->next_ptr;
	currentnode->next_ptr = newnode;
	list.tailnode = newnode;
}

void print_list(List& list) {
	Node* currentnode = list.headnode;
	while (currentnode != NULL) {
		cout << currentnode->data << " ";
		currentnode = currentnode->next_ptr;
	}
}

void add_list(List& list) {
	Node* newnode = new Node;
	char data;
	cout << "Enter new node data(char): ";
	cin >> data;
	Node* currentnode = list.headnode;
	newnode->data = data;
	newnode->next_ptr = list.headnode;
	list.headnode->prev_ptr = newnode;
	list.headnode = newnode;
}

int main()
{
	List list;
	int n;
	cout << "Enter list size: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		StartList(list, i);
	}
	cout << "Check your list: " << endl;
	print_list(list);
	cout << endl;
	add_list(list);
	cout << "Result list: " << endl;
	print_list(list);
	return 0;
}