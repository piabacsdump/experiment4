#include <iostream>
#include <cstdlib>
using namespace std;

int p, num1, num2;
char choice;

int main(){

	cout<<"Calculator"<<endl;
	cout<<"1.)ADD"<<endl;
	cout<<"2.)SUBTRACT"<<endl;
	cout<<"3.)MULTIPLY"<<endl;
	cout<<"4.)DIVIDE"<<endl;
	cout<<"5.)MODULUS"<<endl;
	cout<<endl;
	cout<<"Kindly enter desired Operation [1-5]: ";
	cin>>p;
	cout<<endl;
	cout<<"Enter two(2) desired numbers: ";
	cin>>num1>>num2;
	
	switch(p){
	
		case 1:
		cout<<"You choose: ADD"<<endl;
		cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
		
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now end. Thanks!"<<endl;
				return 0;
		}
		
		case 2:
		cout<<"You choose: SUBTRACTION"<<endl;
		cout<<"The difference of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
		
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now end. Thanks!"<<endl;
				return 0;
		}
		
		case 3:
		cout<<"You choose: MULTIPLY"<<endl;
		cout<<"The product of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
		
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now end. Thanks!"<<endl;
				return 0;
		}
		
		case 4:
		cout<<"You choose: DIVIDE"<<endl;
		cout<<"The quotient of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
		
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now end. Thanks!"<<endl;
				break;
				return 0;
		}
		
		case 5:
		cout<<"You choose: MODULUS"<<endl;
		cout<<"The remainder of "<<num1<<" and "<<num2<<" is "<<abs(num1%num2)<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
	
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now end. Thanks!"<<endl;
				break;
				return 0;
		}
		
	}
	
	return 0;

}

