//double linked list
#include<iostream>
#include<stdlib.h>
using namespace std;

struct  node
{
	int data;
	struct node *next;
	struct node *prev;
}*head;

void print();
void insert_first();
void insert_last();
void insert_middle();
void delete_first();
void delete_last();
void delete_middle();

int main()
{
	struct node *temp,*newmode;
	
	head=new node();
	cout<<"Enter the data of the head: ";
	cin>>head->data;
	head->next=NULL;
	head->prev = NULL;
	
	int ch;
	while(1)
	{
		
		cout<<"\n****************************************************\n";
		cout<<"\nOperation Menu: \n";
		cout<<"\t0. print\n";
		cout<<"\t1. insertion at start\n";
		cout<<"\t2. insertion at end\n";
		cout<<"\t3. insertion at middle\n";	
		cout<<"\t4. deletion at first position\n";
		cout<<"\t5. deletion at end position\n";
		cout<<"\t6. deletion at specific position\n";
		cout<<"\t7. exit\n";	
		
		cout<<"enter the opertino you want to perform: ";
		cin>>ch;
		cout<<"\n////////////////////////////////////////////////////////\n";
		switch(ch)
		{
			case 0:
				print();
				break;
				
			case 1:
				insert_first();
				
				print();
				break;
				
			case 2:
				insert_last();
				print();
				break;
				
			case 3:
				insert_middle();
				print();
				break;
				
			case 4:
				delete_first();
				print();
				break;
			
			case 5:
				delete_last();
				print();
				break;
			
			case 6:
				delete_middle();
				print();
				break;
			
			case 7:
				cout<<"Thank you lol!";
				exit(0);
			
			default:
				cout<<"invalid choice";
				break;
				
		}
		

	}	
}

void insert_first()
{
	struct node *temp, *newnode;
	
	newnode= new node();
	cout<<"enter the data of the node: ";
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		newnode->next=head;
		newnode->prev=NULL;
		head=newnode;
		
	}
	
}

void print()
{
	struct node *temp;
	cout<<"\n================================================\n";
	temp=head;
	if(head==NULL)
	{
		cout<<"list is empty";
	}
	while(temp!=NULL)
	{
		cout<<temp->data<<"<==>";
		temp=temp->next;
	}
	cout<<"\n================================================\n";
}

void insert_last()
{
	struct node *temp, *newnode;
	newnode= new node();
	
	cout<<"Enter the data pof the last node: ";
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	temp=head;
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
}

void insert_middle()
{
	int n;
	cout<<"enter the position where you want to insert the node: ";
	cin>>n;
	
	struct node *temp, *newnode;
	newnode = new node();
	
	cout<<"enter the data of the node: ";
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	temp=head;
	for(int i=1;i<=n;i++)
	{
		if(temp->next==NULL)
		{
			cout<<"list consists less number of nodes";
			exit(0);
		}
		else
		{
			temp=temp->next;
		}
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next=newnode;
		
		temp=newnode;
	}
}

void delete_first()
{
	struct node *temp;
	temp=head;
	
	temp=temp->next;
	temp->prev=head;
	head=temp;
	head->prev=NULL;
}

void delete_last()
{
	struct node *temp;
	
	temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	
	temp->next=NULL;
	
	
}

void delete_middle()
{
	struct node *temp,*ptr;
	int n;
	cout<<"Enter the position you want to delete the node: ";
	cin>>n;
	
	temp=head;
	for(int i=2;i<=n;i++)
	{
		if(temp->next==NULL)
		{
			cout<<"invalid position";
			exit(0);
		}
		else
		{
			temp=temp->next;
		}
				
		ptr=temp->next;  
        temp->next=ptr->next;  
        ptr->next->prev=temp;  
        free(ptr);  
		
	}
}
