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

int main()
{
	node* root=create_tree();
	// printpostorder(root);
	// cout<<endl;
	// printinorder(root);
	// cout<<endl;
	// printpreorder(root);
	// cntNodes(root);
	// cout<<endl<<countnode<<endl;
	// int h=height(root);
	// cout<<h<<endl;
	cout<<daimeter(root);
	return 0;
}