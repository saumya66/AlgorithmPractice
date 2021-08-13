#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int arrSize, int searchElement) {
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] == searchElement) {
			return i;
		}
	}
	return -1;
}

int main()
{
	int arrSize, searchElement;
	cout << "Enter the size of array";
	cin >> arrSize;
	int arr[arrSize];
	cout << "Enter the array element";
	for (int i = 0; i < arrSize; i++) {

		cin >> arr[i];
	}
	cout << "Enter the Search element";
	cin >> searchElement;


	int position = LinearSearch(arr, arrSize, searchElement);
	if (position == -1) {
		cout << "The element is not present";
	} else {
		cout << "The element is found at position : " << position + 1;
	}
	return 0;
}