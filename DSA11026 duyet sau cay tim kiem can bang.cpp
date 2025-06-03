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

node *buildBalanceBST(vector<int> &a, int l, int r) {
    if(l > r)
        return NULL;
    int mid = (l + r) / 2;
    node *root = new node(a[mid]);
    root->l = buildBalanceBST(a, l, mid - 1);
    root->r = buildBalanceBST(a, mid + 1, r);
    return root;
}

void postOrder(node *root) {
    if(!root)
        return;
    postOrder(root->l);
    postOrder(root->r);
    cout << root->val << ' ';
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
        sort(a.begin(), a.end());
        node *root = buildBalanceBST(a, 0, n - 1);
        postOrder(root);
        cout << '\n';
    }
}