#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int a;
	bool p=false;
	
	cout<<"Enter integer:";
	
	cin>>n;
	
	for(int a=2; a<n; a++)
	 {
	 	if (n%a==0)
	 	{
	 		p = true;
	 		break;
		 }
	 }
	 if(p==false && n>1)
	    cout<<"Number is prime = "<<n;
	 else
	    cout<<"Number is not prime = "<<n;
	return 0;
}
