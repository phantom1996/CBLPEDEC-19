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
#include<queue>
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

node* searchintobst(node* root,int key){
	if(root==NULL){
		return NULL;
	}
	else if(root->data==key){
		return root;
	}
	else if(key>root->data){
		searchintobst(root->right,key);
	}
	else{
		searchintobst(root->left,key);
	}

}

#include<climits>
bool is_BST(node* root,int mini=INT_MIN,int maxi=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data>=mini && root->data<=maxi && is_BST(root->left,mini,root->data) && is_BST(root->right,root->data,maxi)){
		return true;
	}
	else{
		return false;
	}
}
node* ArraytoBST(node* root,int *a,int s,int e){

	//base case
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;

	root=new node(a[mid]);
	root->left=ArraytoBST(root->left,a,s,mid-1);
	root->right=ArraytoBST(root->right,a,mid+1,e);
	return root;

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
#include<cmath>
bool is_balance(node* root){
	if(root==NULL){
		return true;
	}
	if(abs(height(root->left)-height(root->right))<=1 && is_balance(root->left) && is_balance(root->right)){
		return true;
	}
	else{
		return false;
	}
}


node* Findminimumfromright(node* root){
	//
	if(root==NULL){
		return NULL;
	}
	//search in the left tree;
	//homework




}

node* Delete(node* root,int data){
	//ase case
	if(root==NULL){
		return NULL;
	}

	else if(data<root->data){
		root->left=Delete(root->left,data);
	}
	else if(data>root->data){
		root->right=Delete(root->right,data);
	}
	else{
		//1st case no child'
		if(root->left==NULL && root->right==NULL){
			delete root;
			root=NULL;
			return root;
		}

		//1 child

		else if(root->left==NULL){
			node* temp=root;
			root=root->right //mapping the address
			delete temp;
			return root;

		}
		else if(root->right==NULL){
			node* temp=root;
			root=root->left //mapping the address
			delete temp;
			return root;

		}

		//2 child
		else{
			node* rightmin=Findminimumfromright(root->right);
			root->data=rightmin->data;
			root->right=Delete(root->right,data);
		}




	}


}

int main()
{
	// int n;cin>>n;
	// int a[100];
	// for(int i=0;i<n;i++){
	// 	cin>>a[i];
	// }
	//node *root=ArraytoBST(root,a,0,n-1);
	node* root=createBST();
	cout<<boolalpha<<is_balance(root)<<endl;
	// levelorderprint(root);
	//node* root=createBST();
	// int key;
	// cin>>key;
	// node* ans=searchintobst(root,key);
	// if(ans==NULL){
	// 	cout<<"Key NOT FOUNd"<<endl;
	// }
	// else{
	// 	cout<<"key Found "<<ans->data<<endl;
	// }
	// bool istrue=is_BST(root);
	// if(istrue){
	// 	cout<<"BST";
	// }
	// else{
	// 	cout<<"NOT BST";
	// }
//	printinorder(root);
//	cout<<endl<<endl;
//	levelorderprint(root);
	return 0;
}

