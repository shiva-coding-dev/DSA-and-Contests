#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL; 
    }
};

Node* createNode(int val){
    Node* node = new Node(val);
    return node;
}

void insert(Node* &head,int dd){
    if (head == NULL) {
        head = createNode(dd);
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = createNode(dd);
}

int length(Node* head){
    int len = 0;
    while(head){
        len++;
        head=head->next;
    }
    return len;
}

Node* merge(Node* a, Node* b, Node* c){
    Node dummy(0);
    Node* tail = &dummy;

    while(a || b || c){
        int minVal = INT_MAX;
        if (a) minVal = min(minVal, a->data);
        if (b) minVal = min(minVal, b->data);
        if (c) minVal = min(minVal, c->data);

        if (a && a->data == minVal){
            tail->next = a;
            a = a->next;
        } else if (b && b->data == minVal){
            tail->next = b;
            b = b->next;
        } else if (c && c->data == minVal){
            tail->next = c;
            c = c->next;
        }
        tail = tail->next;
        tail->next = NULL;
    }

    return dummy.next;
}

Node* mergeSort(Node* head){
    int len = length(head);
    if(len <= 1) return head;

    int firstlen = len / 3;
    int secondlen = len / 3;
    int thirdlen = len - firstlen - secondlen;

    Node* first = head;
    Node* temp = head;
    for(int i = 1; i < firstlen; i++){
        temp = temp->next;
    }
    Node* second = temp->next;
    temp->next = NULL;

    temp = second;
    for(int i = 1; i < secondlen; i++){
        temp = temp->next;
    }
    Node* third = temp->next;
    temp->next = NULL;

    Node* sortedFirst = mergeSort(first);
    Node* sortedSecond = mergeSort(second);
    Node* sortedThird = mergeSort(third);

    return merge(sortedFirst, sortedSecond, sortedThird);
}

void printList(Node* head){
    while(head){
        cout << head->data;
        if(head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    vector<int> values;
    while(true){
        cout<<"Enter the number";
        int val;
        cin>>val;
        if(val==-1){
            break;
        }else{
            values.push_back(val);
        }
        cout<<"\n";
    }
    for(int val : values){
        insert(head, val);
    }

    head = mergeSort(head);
    printList(head);
    return 0;
}

