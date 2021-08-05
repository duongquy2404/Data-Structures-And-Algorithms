#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

node* createNode(int x) {
    node* temp = new node;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node* insert(node* t, int u, int v, char x) {
    if (t == NULL) {
        t = createNode(u);
    }
    queue<node*> que;
    que.push(t);
    while (!que.empty()) {
        node* p = que.front();
        que.pop();
        if (p->data == u) {
            if (x == 'L' && p->left == NULL) {
                p->left = createNode(v);
                return t;
            }
            if (x == 'R' && p->right == NULL) {
                p->right = createNode(v);
                return t;
            }
        }
        else {
            if (p->left != NULL) {
                que.push(p->left);
            }
            if (p->right != NULL) {
                que.push(p->right);
            }
        }
    }
    return t;
}

void levelOrder(node* t) {
    if (t == NULL) { return; }
    queue<node*> que;
    que.push(t);
    while (!que.empty()) {
        node* p = que.front();
        que.pop();
        cout << p->data << " ";
        if (p->left != NULL) {
            que.push(p->left);
        }
        if (p->right != NULL) {
            que.push(p->right);
        }
    }
}

int main() {
	int test; cin >> test;
	while (test--) {
        int n, u, v; cin >> n;
        char x;
        node* t = NULL;
		for (int i = 0; i < n; i++) {
			cin >> u >> v >> x;
            t = insert(t, u, v, x);
		}
        levelOrder(t);
        cout << endl;
	}
	return 0;
}