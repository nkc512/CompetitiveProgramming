#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int val;
	while(t--)
	{
	    //vec.clear();
	    int sum1=0,sum2=0;
	    for(int i=0;i<6;i++)
	    {
	        cin>>val;
	        if(i<3)
	        {
	            sum1+=val;
	        }
	        else
	            sum2+=val;
	        
	    }
	    if(sum1>sum2)
	    {
	        cout<<"1\n";
	    }
	    else
	        cout<<"2\n";
	}
	return 0;
}