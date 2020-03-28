// heap
#include <iostream>
#include <vector>
using namespace std;

class MinHeap{

public:
	vector<int> v;
	MinHeap(){
		v.push_back(-1);
	}
	void heapify(int index){
		int parent_index=index;
		int left_child=2*parent_index;
		int right_child=2*parent_index+1;

		//comparison

		// 1.left_child
		if(left_child<v.size() && v[parent_index]>v[left_child]){
			parent_index=left_child;
		}

		//2.right
		if(right_child<v.size() && v[parent_index]>v[right_child]){
			parent_index=right_child;
		}

		if(index!=parent_index){
			swap(v[index],v[parent_index]);
			heapify(parent_index);
		}
	}


	void push(int data){
		//insert in vectore
		v.push_back(data);

		//heap property regain
		int index=v.size()-1;
		int parent=index/2;

		while(index>1 && v[parent]>v[index]){
			swap(v[parent],v[index]);
			index=parent;
			parent=index/2;
		}
	}
	void pop(){
		int last=v.size()-1;
		swap(v[last],v[1]);
		v.pop_back();
		heapify(1);
	}

	bool empty(){
		return v.size()==1;
	}
	int topminelement(){
		return v[1];
	}

	int size(){
		return v.size()-1;
	}

};

void Print_heap(MinHeap h){
	while(!h.empty()){
		cout<<h.topminelement()<<" ";
		h.pop();
	}
}


int main()
{

	MinHeap h;
	h.push(4);
	h.push(3);
	h.push(1);
	h.push(6);
	h.push(5);
	h.push(2);
	Print_heap(h);





	
	return 0;
}