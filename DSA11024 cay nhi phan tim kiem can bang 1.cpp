#include<bits/stdc++.h>

using namespace std;

struct node {
    int val;
    node *l, *r;
    node (int x) {
        val = x;
        l = r = NULL;
    }
};

int findRoot(vector<int> &a, int l, int r) {
    if(l > r)
        return -1;
    int mid = (l + r) / 2;
    a.erase(a.begin() + mid);
    return a[mid];
}

int ans(vector<int> a) {
    sort(a.begin(), a.end());
    return findRoot(a, 0, a.size() - 1);
}

node *insert(node *root, int val) {
    if(!root)
        return new node(val);
    if(val < root->val)
        root->l = insert(root->l, val);
    else
        root->r = insert(root->r, val);
    return root;
}

node *buildBST(vector<int> &a) {
    node *root = NULL;
    for(int val : a) {
        root = insert(root, val);
    }
    return root;
}

void postOrder(node *root) {
    if(!root)
        return;
    cout << root->val << ' ';
    postOrder(root->l);
    postOrder(root->r);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a)
            cin >> x;
        int rootVal = ans(a);
        a.insert(a.begin(), rootVal);
        node *root = buildBST(a);
        postOrder(root);
        cout << '\n';
    }
}