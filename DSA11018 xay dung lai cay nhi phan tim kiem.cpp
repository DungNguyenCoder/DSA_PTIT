#include<bits/stdc++.h>

using namespace std;

struct node {
    int val;
    node *l, *r;
    node(int x) {
        val = x;
        l = r = NULL;
    }
};

node *insert(node *root, int val) {
    if(!root)
        return new node(val);
    if(val < root->val) {
        root->l = insert(root->l, val);
    }
    else
        root->r = insert(root->r, val);
    return root;
}

node *buildBST(const vector<int> &a) {
    node *root = NULL;
    for(int val : a) {
        root = insert(root,val);
    }
    return root;
}

void inOrder(node *root) {
    if(!root)
        return;
    cout << root->val << " ";
    inOrder(root->l);
    inOrder(root->r);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        node *root = buildBST(a);
        inOrder(root);
        cout << '\n';
    }
}