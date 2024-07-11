// Maximum difference between two elements assuming that larger 
// element appears after the smaller number
#include <bits/stdc++.h>
using namespace std;

int maximumDiffrence ( int arr[], int n )
{
	
	int diffrence = arr[1]-arr[0];
	int sum = diffrence;
	int maximumSum = sum;

	for(int i=1; i<n-1; i++)
	{
		
		diffrence = arr[i+1]-arr[i];

		
		if ( sum > 0 )
		sum += diffrence;
		else
		sum = diffrence;

		if ( sum > maximumSum)
		maximumSum = sum;
	}

	return maximumSum;
}


int main()
{
    cout<<"enter the size of array ";
    int p;
    cin>>p;
    int arr[p] ;
    cout<<"enter the values of the array " ;
    for(int i=0; i<p; i++)
    cin>>arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum difference is " << maximumDiffrence( arr, n );

    return 0;
}
