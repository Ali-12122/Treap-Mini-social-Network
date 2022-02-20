#include <bits/stdc++.h>
#include "User.h"
#include "UserList.h"
using namespace std;
int main() {

    string username1 = "soad91";
    string username2 = "olaa100";
    string username3 = "emadsalem1";
    string username4 = "abdoamr";
    string username5 = "fatoom";
    string username6 = "mony34";
    string username7 = "emy2000";
    string username8 = "talaat3000";
    string username9 = "samir22";

    string name1 = "Soad Saber";
    string name2 = "Ola Kamel";
    string name3 = "Emad Salem";
    string name4 = "Abdelkarim Amr";
    string name5 = "Fatma Omar";
    string name6 = "Mona Hamed";
    string name7 = "Iman Kareem";
    string name8 = "Talaat Mahmoud";
    string name9 = "Samir Abdelshakoor";

    string email1 = "soad91@gmail.com";
    string email2 = "olaa100@yahoo.com";
    string email3 = "emadsalem1@gmail.com";
    string email4 = "abdoamr@gmail.com";
    string email5 = "fatoom@yahoo.com";
    string email6 = "mony34@gmail.com";
    string email7 = "emy2000@gmail.com";
    string email8 = "talaat3000@gmail.com";
    string email9 = "samir22@gmail.com";


    treap_Node* friendsTreap1 = nullptr;
    treap_Node* friendsTreap2 = nullptr;
    treap_Node* friendsTreap3 = nullptr;
    treap_Node* friendsTreap4 = nullptr;
    treap_Node* friendsTreap5 = nullptr;
    treap_Node* friendsTreap6 = nullptr;
    treap_Node* friendsTreap7 = nullptr;
    treap_Node* friendsTreap8 = nullptr;
    treap_Node* friendsTreap9 = nullptr;


    User user1(name1, username1, email1, friendsTreap1);
    User user2(name2, username2, email2, friendsTreap2);
    User user3(name3, username3, email3, friendsTreap3);
    User user4(name4, username4, email4, friendsTreap4);
    User user5(name5, username5, email5, friendsTreap5);
    User user6(name6, username6, email6, friendsTreap6);
    User user7(name7, username7, email7, friendsTreap7);
    User user8(name8, username8, email8, friendsTreap8);
    User user9(name9, username9, email9, friendsTreap9);

    User *user1ptr = &user1;
    User *user2ptr = &user2;
    User *user3ptr = &user3;
    User *user4ptr = &user4;
    User *user5ptr = &user5;
    User *user6ptr = &user6;
    User *user7ptr = &user7;
    User *user8ptr = &user8;
    User *user9ptr = &user9;



    user8.addFriend(user3);
    user3.addFriend(user8);

    user5.addFriend(user2);
    user2.addFriend(user5);

    user2.addFriend(user6);
    user6.addFriend(user2);

    user3.addFriend(user4);
    user4.addFriend(user3);

    user7.addFriend(user6);
    user6.addFriend(user7);

    user9.addFriend(user8);
    user8.addFriend(user9);

    listNode user1Node(username1, user1ptr);
    listNode user2Node(username2, user2ptr);
    listNode user3Node(username3, user3ptr);
    listNode user4Node(username4, user4ptr);
    listNode user5Node(username5, user5ptr);
    listNode user6Node(username6, user6ptr);
    listNode user7Node(username7, user7ptr);
    listNode user8Node(username8, user8ptr);
    listNode user9Node(username9, user9ptr);


    listNode* head_Ptr = &user1Node;

    listNode** ptr_To_Head_Ptr = &head_Ptr;

    UserList users_list(head_Ptr);

    users_list.appendNode(ptr_To_Head_Ptr, user1ptr);
    users_list.appendNode(ptr_To_Head_Ptr, user2ptr);
    users_list.appendNode(ptr_To_Head_Ptr, user3ptr);
    users_list.appendNode(ptr_To_Head_Ptr, user4ptr);
    users_list.appendNode(ptr_To_Head_Ptr, user5ptr);
    users_list.appendNode(ptr_To_Head_Ptr, user6ptr);
    users_list.appendNode(ptr_To_Head_Ptr, user7ptr);
    users_list.appendNode(ptr_To_Head_Ptr, user8ptr);
    users_list.appendNode(ptr_To_Head_Ptr, user9ptr);

    users_list.printUserList();



    while(true){
        cout<<"Type your login to log in, or type exit to terminate the program\n";
        string action1;
        cin>>action1;
        if(action1=="login"){

        }
        if(action1=="exist"){ break;}
    }
    return 0;
}
