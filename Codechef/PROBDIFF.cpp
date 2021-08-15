#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	vector<int>vec(4);
	while(t--)
	{
	    for(int i=0;i<4;i++)
	        cin>>vec[i];
	    if(
	    		((vec[0]!=vec[1]) && (vec[2]!=vec[3]))||
	    		((vec[0]!=vec[2]) && (vec[1]!=vec[3])) || 
	    		((vec[0]!=vec[3]) && (vec[2]!=vec[1]))
		)
	    {
	        cout<<"2\n";
	    }
	    else if(
	    		((vec[0]!=vec[1]) || (vec[2]!=vec[3]))||
	    		((vec[0]!=vec[2]) || (vec[1]!=vec[3])) || 
	    		((vec[0]!=vec[3]) || (vec[2]!=vec[1]))
		)
	    {
	        cout<<"1\n";
	    }
	    else 
	        cout<<"0\n";
	}
	return 0;
}