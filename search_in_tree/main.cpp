#include <iostream>

using namespace std;

typedef struct Node {
	int value;
	struct Node *left;
	struct Node *right;
	}Node;

Node* find(Node *node, int v)
{
	if(node == NULL) return NULL;
    if(node->value == v) return node;
    Node *node1 = find(node->left,v);
    Node *node2 = find(node->right,v);
    if(node1!=NULL)return node1;
    if(node2!=NULL)return node2;
	}


int main(){
	cout << "hello world"<<endl;
    Node * large;
    large = new Node;
	large->value = 0;
    large->left = new Node;
    large->left->value = 1;
    large->left->left = new Node;
    large->left->left->value = 3;
    large->left->left->left = new Node;
    large->left->left->left->value = 7;
    large->left->right = new Node;
    large->left->right->value = 4;
    large->left->right->left = new Node;
    large->left->right->left->value = 8;
    large->left->right->right = new Node;
    large->left->right->right->value = 9;
    large->right = new Node;
    large->right->value = 2;
    large->right->left = new Node;
    large->right->left->value = 5;
    large->right->right = new Node;
    large->right->right->value = 6;
	int n;
	cin>>n;
	Node* n2 = find(large,n); //0
	if(n2 != NULL){
		printf("%d\n",n2->value);
		}
	else{
		printf("NULL\n");
		}
	return 0;
	}
