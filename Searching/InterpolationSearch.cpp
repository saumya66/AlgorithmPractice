#include <bits/stdc++.h>
using namespace std;

bool InterpolationSearch(int arr[], int left, int right , int searchElement)
{
	while (left <= right && searchElement >= arr[left] && searchElement <= arr[right]) {
		int pos = left + ( (right - left) / (arr[right] - arr[left])) * (searchElement - arr[left]);
		if (arr[pos] == searchElement  )
			return true;
		else if (arr[pos] > searchElement) {
			return InterpolationSearch(arr, left, pos - 1, searchElement);
		}
		else if (arr[pos] < searchElement) {
			return InterpolationSearch(arr, pos + 1, right, searchElement);
		}
	}
	return false;
}

int main() {

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

	bool ans = InterpolationSearch(arr, 0, arrSize - 1, searchElement);
	if (ans)cout << "We got it !";
	else cout << "It's not present !";

}