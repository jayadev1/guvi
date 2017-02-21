#include <iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int A[n],count[1000];
	memset(count,0,sizeof(count));
	for(int i=0;i<n;i++)
	{
	   cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
	     if(count[A[i]]==1)
	     {
	        cout<<A[i]<<" ";
	        count[A[i]]++;
	       
	     }    
	       
	     else
	       count[A[i]]++;
	}       
	
	return 0;
}

