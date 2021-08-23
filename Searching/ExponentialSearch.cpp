#include<bits/stdc++.h>
using namespace std;

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

bool ExponentialSearch(int arr[], int n, int searchElement ) {
	if (arr[0] == searchElement)
		return 0;
	int i = 1;
	while (i < n && arr[i] < searchElement) {
		i = i * 2;
	}
	return BinarySearch(arr, i / 2, min(i, n - 1), searchElement);
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

	bool search = ExponentialSearch(arr, arrSize, searchElement);
	if (search == false) {
		cout << "The element is not present !";
	} else {
		cout << "Yay ! we found the element";
	}
	return 0;
}