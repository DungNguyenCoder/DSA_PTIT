#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll res;

struct Node {
    int data;
    Node* l;
    Node* r;
    Node(int value) {
        data = value;
        l = NULL;
        r = NULL;
    }
};

bool check;

bool isLeaf(Node* root) {
    return root->l == root->r && root->l == NULL;
}

void solve(Node* root) {
    if (root == NULL) {
        return;
    }
    if (root->r != NULL && isLeaf(root->r)) {
        res += root->r->data;
    }
    if (root->r != NULL && !isLeaf(root->r)) {
        solve(root->r);
    }
    if (root->l != NULL && !isLeaf(root->l)) {
        solve(root->l);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    int u, v;
    char c;
    while (t--) {
        int n;
        cin >> n;
        map<int, Node*> m;
        cin >> u >> v >> c;
        Node* root = new Node(u);
        if (c == 'L') {
            root->l = new Node(v);
            m[v] = root->l;
        } else {
            root->r = new Node(v);
            m[v] = root->r;
        }
        m[u] = root;
        n--;
        while (n--) {
            cin >> u >> v >> c;
            if (c == 'L') {
                m[u]->l = new Node(v);
                m[v] = m[u]->l;
            } else {
                m[u]->r = new Node(v);
                m[v] = m[u]->r;
            }
        }
        solve(root);
        cout << res << "\n";
        res = 0;
        free(root);
    }
}