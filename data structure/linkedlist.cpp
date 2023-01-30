#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
node* take_input()
{
    int data;
    cin>>data;
    node* head=NULL;
    node* tail = NULL;
    while(data!=-1){
        node* new_node=new node(data);
        if(head==NULL){
            head = new_node;
            tail = new_node;
        }
        else{
             tail -> next = new_node;
            tail = new_node;  
        }
        cin>>data;
    }
    return head;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data << " ";
        temp=temp->next;
    }
}
int length(node* head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void ith_index_data(node* head,int i){
    node* temp=head;
    int count=length(temp);
    if(i>count){
        cout<<"NO index data found"<<endl;
    }
    else{
        int k=0;
        while(temp!=NULL){
            if(k==i){
                cout<<"data found "<<temp->data<<endl;
                break;
            }
            temp=temp->next;
            k++;
        
        }
    }
}


void insert_ith_position(node* head,int pos){
    node* temp = head;
    int count=length(temp);
    if(pos>count){
        return;
    }
    else{
        int k=0;
        while(temp!=NULL){
            if(k==pos-1){
                int data;
                cin>>data;
                node* new_node = new node(data);
                node* temp1 = temp;
                temp->next = new_node;
                temp = temp->next;
                temp->next = temp1;
                break;
            }
            k++;
            temp = temp->next;
        }
    }
}

int main()
{
    node *head=take_input();
    print(head);
    insert_ith_position(head,4);
    print(head);
    return 0;
}