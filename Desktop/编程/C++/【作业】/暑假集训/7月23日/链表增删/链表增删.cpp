#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int pp,e;

struct listd{
	int key;
	listd *next;
};

void create(listd *p){//���� 
	while (n--){
		listd *pnew=new listd;
		cin>>pnew->key;
		pnew->next=NULL;
		p->next=pnew;
		p=p->next; 
	}
}

void display(listd *p){//��ӡ 
	while (p->next!=NULL){
		cout<<p->next->key<<" ";
		p=p->next; 
	}
//	cout<<endl;
}

void insert(listd *p,int pp,int e){//���� 
	int t=0;
	while (p!=NULL){
		t++;
		if (t==pp){
			listd *pnew=new listd;
			pnew->key=e;
			pnew->next=p->next;
			p->next=pnew;
			break;
		}
		p=p->next;
	}
}

void deleted(listd *p,int pp){//ɾ�� 
	int t=0;
	while (p->next!=NULL){
		t++;
		if (t==pp){
			listd *q=p->next;
			p->next=p->next->next;
			free(q);
		}
		p=p->next;
	}
}

int main(){
	cin>>n;
	listd *head=new listd;
	head->next=NULL;
	create(head);
//	display(head);
	cin>>pp>>e;
	insert(head,pp,e);
//	display(head);
	cin>>pp;
	deleted(head,pp);
	display(head);
}
