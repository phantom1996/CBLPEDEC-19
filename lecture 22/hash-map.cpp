// hash-map
#include <iostream>
#include "hash-map.h"
#include<string>
using namespace std;


int main()
{
	HashMap h;

	h.Insert("Burger",100);
	h.Insert("Noodles",50);
	h.Insert("Peepsi",30);
	h.Insert("Pizza",150);
	h.Insert("Dal",80);


	//int *temp=h.search("Mango");
	

	h.print();
	cout<<endl;
	cout<<h.search("Pizza")<<endl;
	cout<<h.search("chowmein");	
	return 0;
}







