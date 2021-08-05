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

int checkTree(node* t1, node *t2) {
    if (t1 == NULL && t2 == NULL) {
        return 1;
    }
    else if ((t1 == NULL && t2 != NULL) || (t1 != NULL && t2 == NULL)) {
        return 0;
    }
    else {
        if (t1->data == t2->data && checkTree(t1->left, t2->left) && checkTree(t1->right, t2->right)) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int main() {
	int test; cin >> test;
	while (test--) {
        int n1, n2, u, v;
        char x;
        node* t1 = NULL;
        node* t2 = NULL;
        cin >> n1;
		for (int i = 0; i < n1; i++) {
            cin >> u >> v >> x;
            t1 = insert(t1, u, v, x);
		}
        cin >> n2;
        for (int i = 0; i < n2; i++) {
            cin >> u >> v >> x;
            t2 = insert(t2, u, v, x);
        }
        cout << checkTree(t1, t2) << endl;
	}
	return 0;
}