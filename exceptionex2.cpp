#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
	try
	{
		cout<<"Before Throw\n";
		throw 1;
		cout<<"After throw\n";
	}
	catch(int x)
       {
       	cout<<x  <<"is processed\n";
	   }
	   cout<<"Thank you";
	   
}
