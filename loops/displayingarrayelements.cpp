// #include <iostream>
// using namespace std;

// int main() {

//   int numbers[5] = {7, 5, 6, 12, 35};

//   cout << "The numbers are: ";

//   //  Printing array elements
//   // using range based for loop
//   for (const int &n : numbers) {
//     cout << n << "  ";
//   }

//   cout << "\nThe numbers are: ";

//   //  Printing array elements
//   // using traditional for loop
//   for (int i = 0; i < 5; ++i) {
//     cout << numbers[i] << "  ";
//   }

//   return 0;
// }

/* C++ code to generate all possible subarrays/subArrays
	Complexity- O(n^3) */
#include<bits/stdc++.h>
using namespace std;

// Prints all subarrays in arr[0..n-1]
void subArray(int arr[], int n)
{
	// Pick starting point
	for (int i=0; i <n; i++)
	{
		// Pick ending point
		for (int j=i; j<n; j++)
		{
			// Print subarray between current starting
			// and ending points
			for (int k=i; k<=j; k++)
				cout << arr[k] << " ";

			cout << endl;
		}
	}
}

// Driver program
int main()
{
	int arr[] = {1, 2, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "All Non-empty Subarrays\n";
	subArray(arr, n);
	return 0;
}
