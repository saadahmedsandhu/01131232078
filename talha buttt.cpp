#include <iostream>
using namespace std;
int main(){
	int current salary,years,new salary,i;
	char choice;
	cout<<"enter the current salary of an employee";
	cin>>current salary;
	cout<<"for how many years do you want to increment";
	cin>>years;
	for(i=1;i<=years;i++){
		cout<<"choose b or B ditional 2% bonus increment for exceptional performance";
		cin>>choice;
		{if(choice=='b'||choice=="B')
		cout<<new salary<<current salary+5*current salary/100+2*current salary/100;
		}
		else{
		cout<<new salary=current salary=5*current salary/100;
		}
	
		
	}
	return 0;
}
	
