#include<iostream>
using namespace std;
main(){
	int arraysize;
	cout<<"Bubble Sort:"<<endl;
	cout<<"Kindly enter array size: ";
	cin>>arraysize;
	cout<<"Kindly enter the "<<arraysize<<" elements"<<endl;
	int elements[arraysize];
	
	for(int a = 0; a < arraysize; a++){
		cin>>elements[a];
	}
	cout<<"Your chosen elements: ";
	for(int a = 0; a < arraysize; a++){
		cout<<elements[a]<<", ";
	}
	cout<<endl;
	int numholder;
	for(int i = 0; i < arraysize; i++){
		for(int j = i + 1; j < arraysize; j++){
			if(elements[i] > elements[j]){
				numholder = elements[i];
				elements[i] = elements[j];
				elements[j] = numholder;
			}
		}
	}
	cout<<"Effect of applying bubble sorting technique"<<endl;
	cout<<"Sorted output: ";
	for(int a = 0; a < arraysize; a++){
		cout<<elements[a]<<", ";
	}
}
