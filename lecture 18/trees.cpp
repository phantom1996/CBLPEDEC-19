// trees
#include <iostream>
using namespace std;

int countnode=0;
class node{

public:
	int data;
	node* left;
	node* right;
	node(int x){
		data=x;
		left=NULL;
		right=NULL;
	}
};

 node* create_tree(){

 	int data;
 	cin>>data;
 	if(data==-1){
 		return NULL;
 	}

 	else{
 		node *root=new node(data);
 		root->left=create_tree();
 		root->right=create_tree();
 		return root;
 	}
 }

void printpostorder(node* root){
	// base condition
	if(root==NULL){
		return ;
	}
	printpostorder(root->left);
	printpostorder(root->right);
	cout<<root->data<<" ";
}
void printinorder(node* root){
	// base condition
	if(root==NULL){
		return ;
	}
	printinorder(root->left);
	cout<<root->data<<" ";
	printinorder(root->right);
	
}
void printpreorder(node* root){
	// base condition
	if(root==NULL){
		return ;
	}
	cout<<root->data<<" ";
	printpreorder(root->left);
	printpreorder(root->right);
	
}


void cntNodes(node* root){
	//base 
	if(root==NULL){
		return;
	}
	//preorder traversel
	countnode++;
	cntNodes(root->left);
	cntNodes(root->right);

}


 int  height(node* root){
 	//base consition
 	if(root==NULL){
 		return 0;
 	}
 	int leftkihight=height(root->left)+1;
 	int rightkihight=height(root->right)+1;
 	int ans=max(leftkihight,rightkihight);
 	return ans;
 }

int daimeter(node* root){
	//base
	if(root==NULL){
		return 0;
	}
	int op1=height(root->left)+height(root->right)+1;//passing through root
	int op2= daimeter(root->left); //left subT
	int op3= daimeter(root->right);//right subt
	return max(op1,max(op2,op3));
}

void mirroriverse(node* &root){
	//ase cositio
	if(root==NULL){
		return;
	}
	if(root->left==NULL && root->right==NULL){
		return;
	}
	/*if(root->left==NULL && root->right!=NULL){
		root->left=root->right;
		root->right=NULL;
		return;
	}
	if(root->left!=NULL && root->right==NULL){
		root->right=root->left;
		root->left=NULL;
		return;
	}*/	
	swap(root->left,root->right);
	mirroriverse(root->left);
	mirroriverse(root->right);
}
#include<queue>
node* levelorderinput(){
	queue<node* >q;
	int data;
	cin>>data;
	node* root=new node(data);
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		//left
		cout<<"Enter data of left child of "<<temp->data<<" ";
		cin>>data;
		if(data!=-1){
			//left node bna to le
			temp->left=new node(data);
			q.push(temp->left);
		}

		//right
		cout<<"Enter data of right child of "<<temp->data<<" ";
		cin>>data;
		if(data!=-1){
			temp->right=new node(data);
			q.push(temp->right);
		}
	}
	return root;
}

int main()
{
	node *root=levelorderinput();
	//node* root=create_tree();
	// printpostorder(root);
	// cout<<endl;
	// printinorder(root);
	// cout<<endl;
	 printpreorder(root);
	 //mirroriverse(root);
	 //cout<<endl;
	 //printpreorder(root);
	// cntNodes(root);
	// cout<<endl<<countnode<<endl;
	// int h=height(root);
	// cout<<h<<endl;
	//cout<<daimeter(root);
	return 0;
}