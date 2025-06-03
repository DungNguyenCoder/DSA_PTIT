#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll res;

struct node {
    int data;
    node* l;
    node* r;
    node(int value) {
        data = value;
        l = NULL;
        r = NULL;
    }
};

void inOrder(node *root, vector<int> &v) {
    if(!root)
        return;
    inOrder(root->l, v);
    v.push_back(root->data);
    inOrder(root->r, v);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int u, v;
        char c;
        map<int, node *> mp;
        cin >> u >> v >> c;
        node *root = new node(u);
        if(c == 'L') {
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
            cin >> u >> v >> c;
            if(c == 'L') {
                mp[u]->l = new node(v);
                mp[v] = mp[u]->l;
            }
            else {
                mp[u]->r = new node(v);
                mp[v] = mp[u]->r;
            }
        }
        vector<int> ans;
        inOrder(root, ans);
        sort(ans.begin(), ans.end());
        for(const int &x : ans) {
            cout << x << " ";
        }
        cout << '\n';
    }
}