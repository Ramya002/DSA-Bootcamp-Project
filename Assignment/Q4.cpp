// Write a program to display Fibonacci Series upto nth term (Using loops)

#include<iostream>
using namespace std;
int main(){
	int n,i=0,a=0,b=1,s;
	cout<<"Enter the number of terms: ";
	cin>>n;
	if(n<=0){
		cout<<"Please enter a natural number";
	}
	else if(n==1){
		cout<<"Fibonacci series upto "<<n<<"is: ";
		cout<<a;
	}
	else{
		while (i < n){
			cout<<a<<" ";
       		s = a + b;
       		a = b;
		    b = s;
		    i += 1;
		}      
	}
	return 0;
}
