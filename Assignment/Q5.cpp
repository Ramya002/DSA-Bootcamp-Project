// Write a program to check whether a number is Prime or Not

#include<iostream>
using namespace std;
int main(){
	int n,i;
	bool p = true;

	cout<<"Enter a natural number: ";
	cin>>n;
	if(n==0 || n==1){
		cout<<n<<" is not a prime number";
	}
	else{
		for (i = 2; i <= n / 2; i++){
            if (n % i == 0) {
                p = false;
                break;
            }
		}
	}
	if(p){
		cout<<n<<" is a prime number";
	}
	else{
		cout<<n<<" is not a prime number";
	}
	return 0;
}
