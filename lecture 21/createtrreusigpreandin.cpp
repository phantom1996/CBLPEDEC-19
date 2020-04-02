// createtrreusigpreandin
#include <iostream>
using namespace std;

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

node* createtrreusigpreandin(int *in,int *po,int s,int e,int &lastptr){
		//base case
		if(s>e){
			return NULL; 
		}
		//root node
		node* root=new node(po[lastptr]);
		lastptr--;
		int index;
		for(int i=s;i<=e;i++){
			if(in[i]==root->data){
				index=i;
				break;
			}
		}
		root->right=createtrreusigpreandin(in,po,index+1,e,lastptr);
		root->left=createtrreusigpreandin(in,po,s,index-1,lastptr);

		return root;


}
void printinorder(node *root){
	if(root==NULL){
		return;
	}
	printinorder(root->left);
	cout<<root->data<<" ";
	printinorder(root->right);
}


int main()
{
	int inorder[]={1,10,4,6,7,8,3,13,14};
	int postorder[]={1,4,7,6,10,13,14,3,8};
	int n=sizeof(inorder)/sizeof(int);
	int lastptr=n-1;
	node *root=createtrreusigpreandin(inorder,postorder,0,n-1,lastptr);
	printinorder(root);
	return 0;
}