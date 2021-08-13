#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(int arr[], int left  , int right  , int searchElement) {
	if (left <= right) {
		int mid = left + right   / 2;
		if (arr[mid] == searchElement) {
			return true;
		}
		else if (arr[mid] < searchElement) {
			return BinarySearch(arr, mid + 1, right, searchElement );

		}
		else if (arr[mid] > searchElement) {
			return BinarySearch(arr, left, mid - 1, searchElement );
		}
	}
	return false;
}

int main()
{
	int arrSize, searchElement;
	cout << "Enter the size of array";
	cin >> arrSize;
	int arr[arrSize];
	cout << "Enter the array element";
	for (int i = 0; i < arrSize ; i++) {
		cin >> arr[i];
	}
	cout << "Enter the Search element";
	cin >> searchElement;

	sort(arr, arr + arrSize);

	bool search = BinarySearch(arr, 0, arrSize - 1 , searchElement);
	if (search == false) {
		cout << "The element is not present !";
	} else {
		cout << "Yay ! we found the element";
	}
	return 0;
}