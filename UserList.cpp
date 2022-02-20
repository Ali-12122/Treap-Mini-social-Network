#include "UserList.h"
using namespace std;


listNode::listNode(){
    this->username = "";
    this->user = nullptr;
    this->next = nullptr;
    this->prev = nullptr;
}

listNode::listNode(string username, User *user){
    this->username = username;
    this->user = user;
    this->prev = nullptr;
    this->next = nullptr;
}

void push(listNode** head, User *newUser){

    listNode* new_Node = (listNode*)malloc(sizeof(listNode));
    new_Node->user = newUser;
    new_Node->next = (*head);
    new_Node->prev = nullptr;

    if ((*head) != nullptr){ (*head)->prev = new_Node; }

    (*head) = new_Node;
}

void insertAfter( listNode* prev_Node, User *newUser){
    if (prev_Node == nullptr) {
        cout<<"the node to be inserted after cannot be NULL";
        return;
    }

    listNode* new_Node = (listNode*)malloc(sizeof(listNode));
    new_Node->user = newUser;
    new_Node->next = prev_Node->next;
    prev_Node->next = new_Node;
    new_Node->prev = prev_Node;

    if (new_Node->next != nullptr){new_Node->next->prev = new_Node;}

}

void append( listNode** head_ref, User *newUser){

    listNode* new_node = (listNode*)malloc(sizeof(listNode));
    listNode* last = *head_ref;
    new_node->user = newUser;
    new_node->next = nullptr;

    if (*head_ref == nullptr) {
        new_node->prev = nullptr;
        *head_ref = new_node;
        return;
    }

    while (last->next != nullptr) {last = last->next;}

    last->next = new_node;
    new_node->prev = last;
}

void printList(listNode* head_Node){

    listNode* last_Node = nullptr;

    while (head_Node != nullptr){
        cout<<" "<<head_Node->user->getUserName()<<" \n";
        last_Node = head_Node;
        head_Node = head_Node->next;
    }
}

UserList::UserList(){
    listHead = nullptr;
    listTail = nullptr;
}

UserList::UserList(listNode *listHead){ this->listHead = listHead;}




void UserList::appendNode(listNode **head_ref, User *newUser) {
    append(head_ref, newUser);
}

void UserList::printUserList() {printList(this->listHead);}


