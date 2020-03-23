// bst
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
void levelorderprint(node *root){
	queue<node* >q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left!=NULL){
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
		if(q.front()==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}

	}
}


node* insertintoBST(node* root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	if(data<root->data){
		root->left=insertintoBST(root->left,data);
	}
	else{
		root->right=insertintoBST(root->right,data);
	}
	return root;
}
node* createBST(){

	int data;
	cin>>data;
	node* root=NULL;
	while(data!=-1){
		root=insertintoBST(root,data);
		cin>>data;
	}
	return root;

}
int main()
{
	node* root=createBST();
	printinorder(root);
	cout<<endl<<endl;
	levelorderprint(root);
	return 0;
}