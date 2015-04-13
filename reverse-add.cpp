

#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

void rev_add(string f1,string s1)
{
std::reverse(f1.begin(),f1.end());
std::reverse(s1.begin(),s1.end());
long long no1,no2,tmp;
no1=atoi(f1.c_str());
no2=atoi(s1.c_str());
long long res= no1 + no2;
while( res )
{
  int lsb=(res % 10);
  if(lsb == 0){
   res=res / 10;
  }
  else
   break;

}
char data_set[256];
sprintf(data_set,"%lld",res);
string str(data_set);
std::reverse(s1.begin(),s1.end());
cout<<str<<"\n";
}

int main()
{
int m;
string f1,s1;
//f1="112";
//s1="243";
cin >> m;
for(int i=0;i<m;i++){
cin>>f1;
cin>>s1;
rev_add(f1,s1);
}
