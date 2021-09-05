// Write a program to find the largest number among three numbers entered by the user

#include<iostream>
using namespace std;
int main(){
	int a , b , c ;
	cout<<"Enter value for a: ";
	cin>>a;
	cout<<"Enter value for b: ";
	cin>>b;
	cout<<"Enter value for c: ";
	cin>>c;
	if(a > b){
      if(a > c){
      	cout<<"a = "<<a<<" is the largest number";	
	  }
      else{
      	cout<<"c = "<<c<<" is the largest number";	
	  }
   }else{
      if(b > c){
      	 cout<<"b = "<<b<<" is the largest number";
	  }
      else{
      	cout<<"c = "<<c<<" is the largest number";
	  }
   }
	return 0;
}
