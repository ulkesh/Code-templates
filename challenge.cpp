#include <iostream>
#include <vector>
using namespace std;

vector<string> b1;

long long cal_sum(const char * str,int s,int e)
{    int i;
     long long sum=0;
	for(i=s;i<=e;i++){
	 	sum=sum + (str[i] - 48);
	}
	return sum;
}
long long find_sum(string str)
{
	
	int len = str.length();
	if (len == 4){
		long long final=cal_sum( str.c_str(),0,3);
		cout<<final;
			
	}
    
    
    
	
}

int main()
{
    //cout << "Hello World!" << endl;
    long long n,i,j,k;
    cin >> n;
    string temp;
  for(i=0;i<n;i++)
 {
     cin >> temp;
     
     b1.push_back(temp);
    
 } 
 for(i=0;i<n;i++)
 {
 	find_sum(b1[i]);
 }
 	
 return 0;
}
