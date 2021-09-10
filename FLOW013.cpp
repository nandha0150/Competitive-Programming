#include<iostream>

using namespace std;

int main() {
    int num;
    int res =0;
	cin>>num;
	int arr[num][3];
	for(int i=0; i<num; i++)
	{
	    for(int j=0; j<3; j++)
	    {
	        cin>>arr[i][j];
	    }
	}
	
	for(int i=0; i<num; i++)
	    {
	        res =0;
	        for(int j=0; j<3; j++)
	            res = res + arr[i][j];
                //cout<<endl;
	            if(res==180)
	                cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
	    }
	    
	return 0;
}