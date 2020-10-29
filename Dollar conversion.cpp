
contributing#include <iostream>
using namespace std;
int main() {
	int num;
	int d,q,di,n,p;
	
	cout<<"Enter amount: ";
	cin>>num;
	
	d=num/100;

	q=num/25;

	num=num-q*25;

	di=num/10;

	n=num/5;
@@ -21,4 +23,4 @@ int main() {

	cout<<"Penny: "<<p<<endl;
	return 0;
} 
}
