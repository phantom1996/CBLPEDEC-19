// classes
#include <iostream>
#include <cstring>
using namespace std;

// class syntax
//blueprint
// class class_name{

// };


class car
{
private:
	int price;
public:

//constructor 
	//ye bhi ek function hota h





		char *name;
		//int price;
		int modelno;
		int seats;
	//default constructor
	car(){
		cout<<"hi i am in constructor"<<endl;

	}

	//parameterized constructor


	car(char *a,int p,int m,int s):price(p),modelno(m),seats(s){
			cout<<"hi i am in parameterized constructor"<<endl;
			name=new char[strlen(a)+1];
			 strcpy(name,a);
			// price=p;
			// modelno=m;
			// seats=s;

	}

		//function
		void set_values(char *a,int p,int m,int s){
			name=new char[strlen(a)+1];
			strcpy(name,a);
			price=p;
			modelno=m;
			seats=s;
		}
		void print(){
			cout<<name<<endl;
			cout<<price<<endl;
			cout<<modelno<<endl;
			cout<<seats<<endl;
			cout<<endl;
		}
		void price_change(int n){
			price=n;
		}

		car(car &A){
			cout<<"i am in copy constructor"<<endl;
			name=new char[strlen(A.name)+1];
			strcpy(name,A.name);
			price=A.price;
			modelno=A.modelno;
			seats=A.seats;
		}

		//synatx
		void operator=(car &a){
			name=new char[strlen(a.name)+1];
			strcpy(name,a.name);
			price=a.price*50;
			modelno=a.modelno;
			seats=a.seats;
		}

	void operator+(car &b){
		modelno+=b.modelno;
		price+=b.price;
		seats+=b.seats;
		char *newname=new char[strlen(name)+strlen(b.name)+1];
		// new
		// strcat(newname,name);
		// strcat(newname,b.name);
		// name=newname;
		int i;
		for( i=0;i<strlen(name);i++){
			newname[i]=name[i];
		}
		for(int j=0;j<strlen(b.name);j++){
			newname[i]=b.name[j];
			i++;
		}
		newname[i]='\0';
		name=newname;
	}		





};
int main()
{
	car A("Namo",1000,100,4);
	car B("BMW",100000,1,2);
	//copy constructor

	// car C=A;
	//car e;

	//car C(A);
//	C.name[0]='T';
	car C;
	C=A;
	A+B;
	// A.price=100000
	// A.seats=4;
	// A.modelno=100;
	// // A.name[0]='N';
	// // A.name[1]='A';
	// // A.name[2]='N';
	// // A.name[3]='O';
	// strcpy(A.name,"NANO");
	// cout<<A.price<<endl;

	// cout<<A.name<<endl;
	// cout<<A.seats<<endl;
	// cout<<A.modelno<<endl
	//A.set_values("Namo",1000,100,4);
//	A.price_change(10000);

	A.print();
	B.print();
	C.print();
	return 0;
}