#include<iostream>
#include"queue.h"
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		node* parent;
		node(){
			left=0;
			right=0;
		}
		node(int x,node* l,node* r){
			data=x;
			left=l;
			right=r;
		}
};

class heap{
	node* root;
	int count;
	public:
		heap(){
			root=0;
		}
		
		
		
		void breadth(int x){
			if(root==0){
				root=new node(x,0,0);
				root->parent=0;
				count++;
				return;
			}
			node* ptr=root;
			queue<node> q(count);
			
		}
		
};
