#include<iostream>

using namespace std;

class time{
	
	public:
		int h;
		int m;
		int s;
		friend class user;
		
		void A(void);
		void Z(void);
		void add(time t1,time t2);
};

void time::A(void){
	
	cout<<"Enter time "<<endl;
	cout<<"hours : "; 
	cin>>h;
	cout<<"minutes : ";
	cin>>m;
	cout<<"seconds : ";
	cin>>s;
}
void time::Z(void){
	
	cout<<endl;
	cout<<"total time : ";
	cout<<h<<":"<<m<<":"<<s<<endl;
}
void time::add(time t1,time t2){
	
	this->s=t1.s+t2.s;
	this->m=t1.m+t2.m+this->s/60;
	this->h=t1.h+t2.h+(this->m/60);
	this->m %=60;
	this->s %=60;
}
main(){
	
	time t1,t2,t3;
	t1.A();
	t2.A();
	t3.add(t1,t2);
	t3.Z();
}
