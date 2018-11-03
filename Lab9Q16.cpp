#include <iostream>
using namespace std;
int main()
{
    char bill[11];
	 char* charptr;
    cout<<"Input 10 chars of string"<<endl;
    cin>>bill;
    charptr=&bill[0];
    for(int i=9;i>=0;i--)
   {
    for(int j=i;j<=10;j++)
    {
            cout<<*(charptr+j);
    }
        		cout<<endl;
    }
    return 0;
}
