#include<iostream>
using namespace std;
int main(){
	
	int a = 2, b = 5, temp;

    cout << "Before swapping the numbers are: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping the numbers are: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
	return 0;
}
