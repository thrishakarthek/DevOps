#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter num1 and num2:";
	cin>>n1>>n2;
	cout<<"Enter op";
	char op;
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"Sum = "<<n1+n2; break;
		case '-':
			cout<<"Difference = "<<n1-n2; break;
		case 'x':
			cout<<"Product:"<<n1*n2; break;
		case '/':
			cout<<"Quotient:"<<n1/n2; break;
		default:
			cout<<"Invalid choice"; break;
	}
}
