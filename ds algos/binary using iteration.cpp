#include <bits/stdc++.h>
using namespace std;

int main ()
{

	int n,x,b,e,m;
	cout<<"Enter the length of the array."<<endl;
	cin>>n;
	int arr[n];

	cout<<"Enter the array elements:"<< endl;
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	b=0,e = n-1;

	cout << "Enter the element you want to search for : " << endl;
	cin>>x;

	m=(b+e)/2;

	while (b<=e) {

		if (arr [m] < x) {
			b=m+1;
		}
		else if (arr[m]>x) {
			e = m-1;
		}
		else if (arr [m] == x) {
			cout<< "Item " << x << " found at " << m << " position."<< endl;
			break;
		}
		m=(b + e)/2;

	}

	if (b == e && x != arr [b]) 
		cout<<"Item "<< x <<" not found!"<< endl;



	return 0;
}