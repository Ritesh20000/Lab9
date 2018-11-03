#include <iostream>
using namespace std;

int main(){
	//declaring array
	char billu[6]={'R','I','V','E','R','\0'};//River is my alias online , it is a reference to nate river from death note and lee jordan from harry potter whose alias on potterwatch was River
	
	
	//using index method
	cout <<"I AM"<<endl;
	for(int n=0;n<6;n++)
			cout <<billu[n];

	//using pointers method
	
	cout <<"WATASHI WA"<<endl;
	for(int n=0;n<6;n++) 
	cout<<*(billu+n);
return 0;
}
