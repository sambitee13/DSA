#include<iostream>
using namespace std;
struct Node
{
	string data;
	Node* next;
};

bool isPalindromeUtil(string str)
{
	int length = str.length();
	for (int i=0; i<length/2; i++)
		if (str[i] != str[length-i-1])
			return false;

	return true;
}
bool isPalindrome(Node *node)
{

	string str = "";
	while (node != NULL)
	{
		str.append(node->data);
		node = node->next;
	}
    cout<<"the string in the list is: "<<str;
    cout<<"\n";
	return isPalindromeUtil(str);
}
void printList(Node *node)
{
	while (node != NULL)
	{
		cout << node->data << " -> ";
		node = node->next;
	}
	printf("NULL\n");
}

Node *newNode(const char *str)
{
	Node *new_node = new Node;
	new_node->data = str;
	new_node->next = NULL;
	return new_node;
}
int main()
{
	Node *head = newNode("a");
	head->next = newNode("b");
	head->next->next = newNode("d");
	head->next->next->next = newNode("a");
	head->next->next->next->next = newNode("a");
    printList(head);

	isPalindrome(head)? 
    cout<<"string is pallindrome\n":
    cout<<"string is not pallindrome\n";

	return 0;
}