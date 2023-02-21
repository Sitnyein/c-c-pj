/*linkekd list data structure
lesson 1 code with c++
*/

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		int data2;
		Node * next; //node type
};

//int a =null;int b =null;
//normal pointer store address of variable

//node pointer type//Node->next->Node->next->Node->next->Node 

void dt_print(Node* node) {
	while( node != NULL) {
		cout<<node->data<<" ";
		cout<<node->data2<<endl;
		node = node->next ;//second 
	}
}

int main() {
	cout<<"Hello i am linked list"<<endl;
	//declare node type
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	//memory allocation
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	//head->data = arrow pointer
	
	head->data =1;
	head->data2=101;
	head->next = second;
	
	second->data=2;
	second->data2=202;
	second->next =third;
	
	third->data= 3;
	third->data2=303;
	third->next = NULL;
	
	dt_print(head);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
