#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node* newnode(int data){
    struct node *temp=(struct node*)malloc(sizeof(struct node));

    temp->data=data;
    temp->next=NULL;
    return temp;
}

void insertatbegin(struct node **hd,int data){

       struct node *temp=newnode(data);

       temp->next=*hd;
       *hd=temp;

}

struct node *add(struct node *h1,struct node *h2){

    struct node *curr1=h1;
    struct node *curr2=h2;

    struct node *h3=NULL;

    while(curr1!=NULL && curr2!=NULL){
    int sum=curr1->data+curr2->data;
           insertatbegin(&h3,sum);
    curr1=curr1->next;
    curr2=curr2->next; 
   }

   if(curr1==NULL){
    while(curr2!=NULL){
        int sum=curr2->data;
         insertatbegin(&h3,sum);
        curr2=curr2->next;
        
    }
    
    return h3;
   }

   while(curr1!=NULL){
   
    int sum=curr1->data;
     insertatbegin(&h3,sum);
    curr1=curr1->next;
    
   } 

   return h3;
}

void display(struct node **hd){

    struct node *curr=*hd;

    while(curr!=NULL){

        cout<< curr->data <<"->";
        curr=curr->next;
    
    }

    cout << endl <<endl;

}


int main(){

    struct node *head1 =NULL;
    struct node *head2 =NULL;

    int hp1;
    cout<<"enter highest power(1):";
    cin >> hp1;
    int hp2;
    cout<<"enter highest power(2):";
    cin >> hp2;

    int co;
    int i;
    cout <<"polynomial 1:\n";
    for(i=0;i<=hp1;i++){
        cin >> co;
        insertatbegin(&head1,co);
    }
    cout <<"polynomial 2:\n";
    for(i=0;i<=hp2;i++){
        cin >> co;
        insertatbegin(&head2,co);
    }

    struct node *head3=add(head1,head2);

    display(&head1);
    display(&head2);
    display(&head3);

   return 0; 

}