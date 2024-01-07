#include<iostream>
using namespace std;
int main(){
	double a,b;
	char d;
	
	cout<<"simple calculator by Rohit kumar"<<endl;
	cout<<"enter 1st number"<<endl;
	cin>>a;
	cout<<"enter 2nd number"<<endl;
	cin>>b;
	cout<<"enter an operator(+,-,*,/)"<<endl;
	cin>>d;
	switch(d){
		case '+': cout<<"Result is:"<<a+b<<endl;
							break;
							
		case '-': cout<<"Result is:"<<a-b<<endl;
							break;
							
		case '*': cout<<"Result is:"<<a*b<<endl;
							break;
				
		case '/': cout<<"Result is:"<<a/b<<endl;
							break;
	  default:
	  	cout<<"enter valid operator(+,-,*,/)"<<endl;
			break;
  }
		return 0;
}
