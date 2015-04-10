#include <iostream>
using namespace std;
#define MAX 1000000000000000
long long nos[MAX]={0};

int check_fib(long long no)
{
	if(no ==1 || no==2)
	   return 1;
	   
	   
	   
	   
	
}

int main()
{
    //cout << "Hello World!" << endl;
     vector<long long> bip;
    long long n,i,j,k,temp;
    cin>>n;
    long long max=0;
 for(i=0;i<n;i++)
{
cin >> temp;
bip.push_back(temp);
if(temp > max)
  max=temp;
}
   
   nos[0]=1;
   nos[1]=2; 
   
while(1)
{
	check_fib();
	
}
    
    return 0;
}
