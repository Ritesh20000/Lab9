#include<iostream>
using namespace std;
int main(){

int a;
char b;
bool c=1;
double d;
float e;
short f;
long g;

int *a1=&a;
char *b1=&b;
bool *c1=&c;
double *d1=&d;
float *e1=&e;
short *f1=&f;
long *g1=&g;

cout<<"size of int variable  " << sizeof(a)<<"size of int pointer variable  "<<sizeof(a1)<<endl;
cout<<"size of char variable  " << sizeof(b)<<"size of char pointer variable  "<<sizeof(b1)<<endl;
cout<<"size of bool variable  " << sizeof(c)<<"size of bool pointer variable  "<<sizeof(c1)<<endl;
cout<<"size of double variable  " << sizeof(d)<<"size of double pointer variable  "<<sizeof(d1)<<endl;
cout<<"size of float variable  " << sizeof(e)<<"size of float pointer variable  "<<sizeof(e1)<<endl;
cout<<"size of short variable  " << sizeof(f)<<"size of short pointer variable  "<<sizeof(f1)<<endl;
cout<<"size of long variable  " << sizeof(g)<<"size of long pointer variable  "<<sizeof(g1)<<endl;

return 0;
}
