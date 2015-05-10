#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cal_gcd(int,int);

int cal_gcd(int a,int b)
{

// cout << "GCD of a and b" << a <<"  " <<b << "\n";
	while(a != b) {
		if (a > b)
		  a=a-b;
		else
		  b=b-a;
		
	} 

    //cout <<  a << "\n";
	return a;
}

struct data_ip
{
	int a1,b1,c1;
};
	
	
bool custom_my(data_ip const& lhs, data_ip const& rhs) {
	
	if(lhs.c1 != rhs.c1)
	  return lhs.c1 > rhs.c1;

}

int main()
{
    //cout << "Hello World!" << endl;
 int n,i,j,k,temp,t,pairs,choc,m;
 vector<int> d1,e1;
 
 vector<data_ip> arr;
 
 
 
 
 cin>>t;
 vector<int> vis;
 
 for(i=0;i<t;i++)
 {
     cin >> temp;
     cin >> pairs;
     
     for(j=0;j<temp-1;j++)
     {
     	cin >>choc;
     	d1.push_back(choc);
     	vis.push_back(0);
     } 
     
     for(k=0;k<pairs;k++)
     {
     	data_ip tmp;
     	int f,s;
     	cin >> f;
     	tmp.a1=f;
     	cin >> s;
     	tmp.b1=s;
     	
        int res = cal_gcd(d1[f-1],d1[s-1]);
        tmp.c1=res;
        
        arr.push_back(tmp);
        
        
           
     }
     
     int count=temp/2;
     
     std::sort(arr.begin(),arr.end(), &custom_my);
     
     
     int sum=0,cnt=0;
     
     if (pairs ==1 )
       sum =arr[0].c1;
     else{
     for(m=0; cnt < count && m<pairs; m++){
     	
     	if ( vis[arr[m].a1] == 0 && vis[arr[m].b1] ==0 ){
               sum=sum + arr[m].c1;
               vis[arr[m].a1] =1;
               vis[arr[m].b1]=1;
               cnt++;
     	}        
         //cout<< c1[m] << "\n";
     }
     
     }
     
     e1.push_back(sum);
     arr.clear();
     vis.clear();
 }
 
 
 for(i=0;i<t;i++)
  cout << e1[i] << "\n";
    
    
    return 0;
}
