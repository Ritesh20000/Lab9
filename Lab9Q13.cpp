#include <iostream>
using namespace std;

int main(){
	//declaring array
	int billu[10];
	cout <<"enter the numbers now"<<endl;
	for(int n=0;n<10;n++)
	cin >>billu[n];
	//using index method
	cout <<"the numbers you have entered are"<<endl;
	for(int n=0;n<10;n++)
			cout <<billu[n]<<endl;
	//using pointers method
	
	cout <<"the numbers you have entered are"<<endl;
	for(int n=0;n<10;n++) 
	cout<<*(billu+n)<<endl;
return 0;
}
