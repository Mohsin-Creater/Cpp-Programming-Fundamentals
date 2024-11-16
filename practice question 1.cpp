#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter Your Age"<<endl;
	cin>>age;
	if (age >= 18) {
    cout<<"YOU ARE ELIGIBLE TO VOTE"<<endl;
	}	if (age <= 18)
	{ cout<<"YOU ARE NOT ELIGIBLE TO VOTE"<<endl;
	}
	return 0;
}
