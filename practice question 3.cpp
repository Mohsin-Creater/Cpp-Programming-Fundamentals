#include<iostream>
using namespace std;
int main()
{
	int score;
	cin>>score;
	if (score >=90)
{
    cout<<"GRADE A"<<endl;
	}	else if (score >=80)
{
    cout<<"GRADE B"<<endl;}	
	else if (score >=70)
{
    cout<<"GRADE C"<<endl;}	
	else
	{ cout<<"GRADE F"<<endl;
	}
	return 0;
}
