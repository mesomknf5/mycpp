#include <iostream>

using namespace std;

int main() {

	int num;	int d,q,di,n,p;

	

	cout<<"Enter amount: ";

	cin>>num;

	

	d=num/100;

	num=num-d*100;

	q=num/25;

	num=num-q*25;

	di=num/10;

	num=num-di*10;

	n=num/5;

	num=num-n*5;

	p=num;

	

	cout<<d<<endl;

	cout<<q<<endl;

	cout<<di<<endl;

	cout<<n<<endl;

	cout<<p<<endl;

	return 0;

}
