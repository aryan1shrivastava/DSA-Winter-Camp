#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
	int key;
	Node* next;
};

Node* head = nullptr;

void push(int key)
{
	Node* node = new Node;
	node->key = key;

	node->next = head;
	head = node;
}

void append(Node* head, int key);
{
	Node* node = new Node;
	node-> key = key;

	node->next = nullptr;

	if(*head==null){
		head - node;
	}
	else{

	}
}

void printList()
{
	Node* ptr = head;
	while (ptr)
	{
		cout << ptr->key << " ";
		ptr = ptr->next;
	}

}

int main()
{

	push(19);
	push(12);
	push(5);
	push(23);
	push(34);

	printList();

	return 0;
}