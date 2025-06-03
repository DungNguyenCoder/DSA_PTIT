#include <bits/stdc++.h>

using namespace std;

struct node {
    int val;
    node *l, *r;
    node(int x) {
        val = x;
        l = r = NULL;
    }
};

void make(node *root, int v, char dir) {
    if(dir == 'L')
        root->l = new node(v);
    else
        root->r = new node(v);
}

void insert(node *root, int u, int v, char dir) {
    if(!root)
        return;
    if(root->val == u) {
        make(root, v, dir);
        return;
    }
    insert(root->l, u, v, dir);
    insert(root->r, u, v, dir);
}

void RNL(vector<int> &v, node *root) {
    if(!root)
        return;
    RNL(v, root->r);
    v.push_back(root->val);
    RNL(v, root->l);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n1;
        int n2;
        int u, v;
        char dir;
        node *root1 = NULL;
        node *root2 = NULL;

        cin >> n1;
        for (int i = 0; i < n1; i++) {
            cin >> u >> v >> dir;
            if(i == 0) {
                root1 = new node(u);
                make(root1, v, dir);
            }
            else {
                insert(root1, u, v, dir);
            }
        }

        cin >> n2;
        for (int i = 0; i < n2; i++) {
            cin >> u >> v >> dir;
            if(i == 0) {
                root2 = new node(u);
                make(root2, v, dir);
            }
            else {
                insert(root2, u, v, dir);
            }
        }

        vector<int> v1, v2;
        RNL(v1, root1);
        RNL(v2, root2);
        if(v1.size() != v2.size()) {
            cout << "0\n";
        }
        else {
            int check = true;
            int len = v1.size();
            for (int i = 0; i < len; i++) {
                if(v1[i] != v2[i]) {
                    check = false;
                    break;
                }
            }
            cout << check << '\n';
        }
    }
}