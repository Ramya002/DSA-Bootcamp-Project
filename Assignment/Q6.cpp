/* Print this pattern using loops
For n=5
	    *
	   * *
	  * * *
	 * * * *
	* * * * *
*/

#include<iostream>
using namespace std;
int main(){
	int n = 5, s, i, j;
	for(i = 1; i <= n; i++){
		for(s = i; s < n; s++){
			cout<<" ";
		}
		for(j = 1; j <= i; j++){
			cout<<"* ";	
		}
		cout<<endl;
	}
	return 0;
}
