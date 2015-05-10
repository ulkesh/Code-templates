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
