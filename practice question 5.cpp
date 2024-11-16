#include<iostream>
using namespace std;
int main()
{
	int age;
	cin>>age;
	bool HAS_ID = true;
	
	if (age >= 18) {
	

	if (HAS_ID){
    cout<<"ENTRY ALLOWED"<<endl;
	}	
	else { cout<<"PLEASE SHOW ID"<<endl;
	} 
}
	else { 
	cout<<"UNDERAGE ENTRY NOT ALLOWED"<<endl;
	}

	return 0;
}
