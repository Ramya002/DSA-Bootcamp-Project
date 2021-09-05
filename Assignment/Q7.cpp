// Write a program that takes n elements from the user and displays the second largest element of an array

#include<iostream>
using namespace std;
int main(){
	int n, i, b[50],l=0,s=0;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the "<<n<<" elements: "<<endl;
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	for (i = 0; i<n; i++){
      if(b[i]>l){
        l = b[i];
      }
    }
   	for (i = 0; i<n; ++i){
   		if(b[i]>s){
	    	if(b[i] == l){
	        	continue;  
			}            
	        s = b[i];
	    }
   }
    cout<<"The second largest element in the array [";
    for(i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<"] is "<<s;
	return 0;
}
