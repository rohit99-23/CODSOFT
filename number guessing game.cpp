#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0)); //seed random number
	
	int secret_number= (rand()%(100-1)+1);
	
	int user_guess;
	int attempts=0;
	
	cout<<"Welcome to my World if Number guessing game" <<endl;
	
	do{
		cout<<"Enter your guess number: "<<endl;
		cin>>user_guess;
		
		if(user_guess>secret_number){
			cout<<"you entered high number! try low"<<endl;
		}
		else if(user_guess<secret_number){
			cout<<"you entered low number! try high"<<endl;
		}
		attempts++;
	}
	while(user_guess != secret_number);
	cout<<"CONGRATULATIONS YOU WIN!"<<endl;
	cout<<"you guess the number in:"<<attempts<<"attempts"<<endl;
	
	return 0;
}
