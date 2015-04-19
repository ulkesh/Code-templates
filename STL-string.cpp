#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h> // for atoi()
using namespace std;

int main()
{
   //cout << "Hello World" << endl; 
   string str="01kesh";
   int a = str[0];
   cout<< a <<"\n";// it will print 48
   
   
   string str="12345";
   const char *p= str.c_str();
   int a=atoi(p);
   a++;
   cout << a <<"\n"; // it will print 12346
   
   
   
   
   
   return 0;
}

