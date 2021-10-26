#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	float a,b,x,funkcja;
	
	x=1;
	cout<<"Podaj a"<<endl;
	cin>>a;
	if(a!=0)
	{
	cout<<"Podaj b"<<endl;
	cin>>b;

	funkcja=b/-(a*x);
	cout<<funkcja;	
    }
       else
    {
	cout<<"Brak mozliwosci wykonania zadania"<<endl;
    }
	return 0;
}
