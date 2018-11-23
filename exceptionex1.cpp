#include <iostream>
#include<conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	int a,b;
	try
	{
		cout<<"Enter Two no";
		cin>>a>>b;
		if(b==0)throw 0;
		cout<<"Division="<<a/b;
	}
	catch(int x)
	{
		cout<<"Division not possible";
		
	}
	
}


