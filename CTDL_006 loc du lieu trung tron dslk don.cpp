#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

struct LinkedList {
    struct Node {
        string data;
        Node* next;
        Node(){}
        Node(string _data) {
            data = _data;
            next = nullptr;
        }
    };

    Node* head = nullptr;

    void addFirst(string v) {
        Node* new_node = new Node();
        new_node->data = v;
        new_node->next = head;
        head = new_node;
    }

    void printList(){
        for(Node* p = head; p != NULL; p = p->next) {
            cout << p->data << " ";
        }
        cout << endl;
    }

    void addLast(string v) {
        Node *new_node = new Node(v);
        if(!head) {
            head = new_node;
            return;
        }
        Node *p = head;
        while(p->next)
            p = p->next;
        p->next = new_node;
    }

    void insertAfter(string pivot, string newKey) {
        Node *p = head;
        while(p && p->data != pivot)
            p = p->next;
        if(p) {
            Node *new_node = new Node(pivot);
            new_node->next = p->next;
            p->next = new_node;
        }
    }

    void removeFirst() {
        if(!head)
            return;
        Node *tmp = head->next;
        delete head;
        head = tmp;
    }

    void removeLast() {
        if(!head)
            return;
        if(!head->next) {
            delete head;
            head = nullptr;
            return;
        }
        Node *p = head;
        while(p->next->next)
            p = p->next;
        delete p->next;
        p->next = nullptr;
    }

    bool searchByKey(string key) {
        Node *p = head;
        while(p) {
            if(p->data == key) {
                return true;
            }
            p = p->next;
        }
        return false;
    }

    void removeByKey(string key) {
        if (!head) return;
        if (head->data == key) {
            removeFirst();
            return;
        }
        Node* p = head;
        while (p->next && p->next->data != key) p = p->next;
        if (p->next) {
            Node* temp = p->next;
            p->next = p->next->next;
            delete temp;
        }
    }
};

inline void solution() {
    int n;
    cin >> n;
    LinkedList first;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        first.addLast(x);
    }
    
}

int main() {
    faster();
    int t;
    if(TEST) {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--) {
        solution();
    }
}