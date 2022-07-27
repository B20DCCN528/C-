#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	Node *left, *right;
	
	Node(int data) {
		this -> data = data;
		this -> left = NULL;
		this -> right = NULL;
	}
};
void MakeNode(Node *root, int data, char c) {
	switch(c) {
		case 'L':
			root -> left = new Node(data);
			break;
		case 'R':
			root -> right = new Node(data);
			break;
	}
}
void Insert(Node *root, int x , int y, char c) {
	if(root == NULL) {
		return;
	}
	if(root -> data == x) {
		MakeNode(root, y, c);
	}
	else {
		Insert(root -> left, x, y, c);
		Insert(root -> right, x, y, c);
	}
}
int Countleaf (Node *root) {
	if(root == NULL) {
		return 0;
	}
	if(root -> left == NULL && root -> right == NULL) {
		return 1;
	}
	return Countleaf(root->left) + Countleaf(root->right);
}
void TestCase() {
	int n;
	cin >> n;
	Node *root = NULL;
	while(n--) {
		int x, y;
		char c;
		cin >> x >> y >> c;
		if(root == NULL) {
			root = new Node(x);
		}
		Insert(root, x, y, c);
	}
	cout << (Countleaf(root -> left) == Countleaf(root -> right));
}
int main() {
	int T = 1;
	cin >> T;
	while(T--) {
		TestCase();
		cout << "\n";
	}
    return 0;
}

