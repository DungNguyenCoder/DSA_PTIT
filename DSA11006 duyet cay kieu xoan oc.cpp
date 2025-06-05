#include <bits/stdc++.h>

using namespace std;

struct node {
    int val;
    node *l,*r;
    node(int x) {
        val = x;
        l = r = NULL;
    }
};

vector<int> spiralOrder(node *root) {
    vector<int> res;
    if(!root)
        return res;

    stack<node *> s1;
    stack<node *> s2;

    s1.push(root);

    while(!s1.empty() || !s2.empty()) {
        while(!s1.empty()) {
            node *cur = s1.top();
            s1.pop();
            res.push_back(cur->val);
            if(cur->r)
                s2.push(cur->r);
            if(cur->l)
                s2.push(cur->l);
        }

        while(!s2.empty()) {
            node *cur = s2.top();
            s2.pop();
            res.push_back(cur->val);
            if(cur->l)
                s1.push(cur->l);
            if(cur->r)
                s1.push(cur->r);
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int u, v;
    char dir;
    while(t--) {
        int n;
        cin >> n;
        map<int, node *> mp;

        cin >> u >> v >> dir;
        node *root = new node(u);
        if (dir == 'L') {
            root->l = new node(v);
            mp[v] = root->l;
        }
        else {
            root->r = new node(v);
            mp[v] = root->r;
        }

        mp[u] = root;
        n--;

        while(n--) {
            cin >> u >> v >> dir;
            if(dir == 'L') {
                mp[u]->l = new node(v);
                mp[v] = mp[u]->l;
            }
            else {
                mp[u]->r = new node(v);
                mp[v] = mp[u]->r;
            }
        }

        vector<int> ans = spiralOrder(root);
        for(int x : ans)
            cout << x << ' ';
        cout << '\n';
    }
}