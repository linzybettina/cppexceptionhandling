#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	try
	{
		cout<<"Testing any exception";
		throw 6.7;
	} 
	catch(...)
	{
		cout<<"Catched the thrown value";
	}
	
}
