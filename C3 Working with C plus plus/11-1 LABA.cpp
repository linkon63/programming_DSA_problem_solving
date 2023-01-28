// C++ program to Find the missing element

#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[], int N)
{
	int i;
	int temp[N + 1];
	for(int i = 0; i <= N; i++){
	temp[i] = 0;
	}

	for(i = 0; i < N; i++){
	temp[arr[i] - 1] = 1;
	}


	int ans;
	for (i = 0; i <= N ; i++) {
		if (temp[i] == 0)
			ans = i + 1;
	}
	cout << ans;
}

/* Driver code */
int main()
{
    int n;
    cin>>n;
	int arr[n]; //= {1,2,5,4}
    for(int i = 0; i < n-1; i++){
        cin>>arr[i];
    }
	int sizeofarr = n-1;
	findMissing(arr, sizeofarr);
	return 0;
}


////// C++ program to Count
////// Inversions in an array
////// using Merge Sort
////#include <bits/stdc++.h>
////using namespace std;
////
////int _mergeSort(int arr[], int temp[], int left, int right);
////int merge(int arr[], int temp[], int left, int mid,
////		int right);
////
////// This function sorts the
////// input array and returns the
////// number of inversions in the array
////int mergeSort(int arr[], int array_size)
////{
////	int temp[array_size];
////	return _mergeSort(arr, temp, 0, array_size - 1);
////}
////
////// An auxiliary recursive function
////// that sorts the input array and
////// returns the number of inversions in the array.
////int _mergeSort(int arr[], int temp[], int left, int right)
////{
////	int mid, inv_count = 0;
////	if (right > left) {
////		// Divide the array into two parts and
////		// call _mergeSortAndCountInv()
////		// for each of the parts
////		mid = (right + left) / 2;
////
////		// Inversion count will be sum of
////		// inversions in left-part, right-part
////		// and number of inversions in merging
////		inv_count += _mergeSort(arr, temp, left, mid);
////		inv_count += _mergeSort(arr, temp, mid + 1, right);
////
////		// Merge the two parts
////		inv_count += merge(arr, temp, left, mid + 1, right);
////	}
////	return inv_count;
////}
////
////// This function merges two sorted arrays
////// and returns inversion count in the arrays.
////int merge(int arr[], int temp[], int left, int mid,
////		int right)
////{
////	int i, j, k;
////	int inv_count = 0;
////
////	i = left;
////	j = mid;
////	k = left;
////	while ((i <= mid - 1) && (j <= right)) {
////		if (arr[i] <= arr[j]) {
////			temp[k++] = arr[i++];
////		}
////		else {
////			temp[k++] = arr[j++];
////
////			// this is tricky -- see above
////			// explanation/diagram for merge()
////			inv_count = inv_count + (mid - i);
////		}
////	}
////
////	// Copy the remaining elements of left subarray
////	// (if there are any) to temp
////	while (i <= mid - 1)
////		temp[k++] = arr[i++];
////
////	// Copy the remaining elements of right subarray
////	// (if there are any) to temp
////	while (j <= right)
////		temp[k++] = arr[j++];
////
////	// Copy back the merged elements to original array
////	for (i = left; i <= right; i++)
////		arr[i] = temp[i];
////
////	return inv_count;
////}
////
////// Driver code
////int main()
////{
////    int n;
////    cin>>n;
////
////	int arr[] = { 1, 20, 6, 4, 5 };
////	int n = sizeof(arr) / sizeof(arr[0]);
////	int ans = mergeSort(arr, n);
////	cout << " Number of inversions are " << ans;
////	return 0;
////}
//
//// This is code is contributed by rathbhupendra
//
//
////
//#include<bits/stdc++.h>
//using namespace std;
//void findMissing(vector<int>arr, int N)
//{
//    int i;
//    vector<int> temp(N + 1);
//    for(int i = 0; i <= N; i++)
//    {
//        temp[i] = 0;
//    }
//
//    for(i = 0; i < N; i++)
//    {
//        temp[arr[i] - 1] = 1;
//    }
//
//
//    int ans;
//    for (i = 0; i <= N ; i++)
//    {
//        if (temp[i] == 0)
//            ans = i  + 1;
//    }
//    cout << ans;
//}
//
//
//int main()
//{
//    int n;
//    cin>>n;
//    int a[] = { 1, 3, 7, 5, 6, 2 };
//
//    for(int i = 0; i<n-1; i++)
//    {
//        cin>>arr[i];
//    }
//    // sort(arr.begin(), arr.end());
//    for(int i = 0; i<n-1; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<"\n missing number:";
//    findMissing(arr, arr.size()); //a.size()
//    return 0;
//}
