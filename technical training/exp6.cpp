#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    pair<int, string> data;
    Node* next;
};

void insert(Node** head, int d, string s) {
    Node* newNode = new Node();
    newNode->data.first = d;
    newNode->data.second = s;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
}

void findCommonRollNos(Node* head1, Node* head2, Node* head3) {
    while (head1 != NULL && head2 != NULL && head3 != NULL) {
        if (head1->data.first == head2->data.first && head2->data.first == head3->data.first) {
            cout<<head1->data.first<<" "<<head1->data.second<<" "<<head2->data.second<<" "<<head3->data.second<<"\n";
            head1 = head1->next;
            head2 = head2->next;
            head3 = head3->next;
        }
        else if (head1->data.first < head2->data.first) {
            head1 = head1->next;
        }
        else if (head2->data.first < head3->data.first) {
            head2 = head2->next;
        }
        else {
            head3 = head3->next;
        }
    }
}


int main() {
    Node* head1 = NULL;
    insert(&head1, 1, "A");
    insert(&head1, 2, "B");
    insert(&head1, 3, "C");
    insert(&head1, 4, "D");
    Node* head2 = NULL;
    insert(&head2, 2, "BE");
    insert(&head2, 4, "BCA");
    insert(&head2, 6, "BE");
    insert(&head2, 8, "BCA");
    Node* head3 = NULL;
    insert(&head3, 2, "8.50");
    insert(&head3, 3, "8.06");
    insert(&head3, 4, "8.00");
    insert(&head3, 5, "7.68");
    cout << "Common roll numbers: \n";
    findCommonRollNos(head1, head2, head3);
    return 0;
}