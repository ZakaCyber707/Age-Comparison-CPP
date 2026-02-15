/*Write a program that asks the user to input their age and show whether they are
older, younger or the same age as you.*/

#include<iostream>
using namespace std;
int main(){
	int age=0;
	int myAge=20;
	
	cout<<"Enter user age in years: ";
	cin>>age;
	
	if(age<myAge&&age>0)
	{
		cout<<"User is younger than me";
	}
	
	
	else if(age>myAge&&age<120)
	{
	cout<<"User is older than me";
	}
	
	
	else if(age==myAge)
	{
		cout<<"User and my age is same";
	}
	
	
	else{cout<<"Invalid data";
	}
	
}
