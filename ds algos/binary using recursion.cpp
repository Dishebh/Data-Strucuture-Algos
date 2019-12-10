#include <bits/stdc++.h>
using namespace std;

int binarySearch (int b, int e, int arr[], int x) {

	int m=(b+e)/2;

	if (arr[m] == x) return m;
	else if (arr[m]>x) binarySearch(b, e, arr, x);
	else if (arr[m]<x) binarySearch (b, e, arr, x);
	else {
		cout << "Item " << x << " not found!" << endl;
		return 0;
	}
	return 0;

}

int main () {

    int n;
	cout<<"Enter the number of elements in the array : " << endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements : "<<endl;
	for (int i = 0; i < n; i++) {
		cin>>arr [i];
	} 
    
    int x;
	cout<<"Enter the element you want to search for : " << endl;
	cin>>x;
	int b=0,e=n-1;
	int p=binarySearch(0, n - 1, arr, x);

	cout<<"Item found at "<<p<<" index."<<endl;

	return 0;
}