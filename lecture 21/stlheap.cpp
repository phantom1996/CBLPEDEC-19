// stlheap
#include <iostream>
#include<queue>
using namespace std;


void print_heap(priority_queue<int,vector<int>,greater<int> >h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
}

int main()
{

//max heap	priority_queue<int> h;
priority_queue<int,vector<int>,greater<int> >h;
	int k=3;
	int data;
	while(1){
		cin>>data;
		if(data==-100){
			print_heap(h);
		}
		else if(h.size()<k){
			h.push(data);
		}
		else{
			if(h.top()<data){
				h.pop();
				h.push(data);
			}
		}
	}



	// h.push(4);
	// h.push(3);
	// h.push(1);
	// h.push(6);
	// h.push(5);
	// h.push(2);

	//print_heap(h);
	return 0;
}