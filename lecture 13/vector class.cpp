// vector class
#include <iostream>
using namespace std;


class Vector{
public:
	int *arr;
	int size;
	int max_size;

	Vector(){
		size=0;
		max_size=4;
		arr=new int[max_size];
	}

	Vector(int i){
		size=0;
		max_size=i;
		arr=new int[max_size];
	}

	void push_back(int x){
		if(size==max_size){
			max_size=2*max_size;
			int *newptr=arr;
			arr=new int[max_size];
			for(int i=0;i<size;i++){
				arr[i]=newptr[i];
			}
			delete []newptr;
		}
		arr[size]=x;
		size++;
	}
	void pop_back(){
		size--;
	}
	int csize(){
		return size;
	}
	int capacity(){
		return max_size;
	}



};





int main()
{	
	Vector v;
	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	cout<<v.csize()<<endl;
	cout<<v.capacity();


	
	return 0;
}