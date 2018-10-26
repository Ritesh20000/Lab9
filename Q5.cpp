#include <iostream>
using namespace std;
int main(){
	char s[10] = "abcde";
	char* cptr;
	for (cptr = s; *cptr != '\0'; cptr++);
	cptr--;
	
	while(cptr >= s)
 	cout << *cptr--;
	
return 0;
}

