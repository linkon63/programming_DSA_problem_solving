
#include <iostream>

using namespace std;

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int maxValue = findMax(arr, n - 1);
    return (maxValue > arr[n - 1]) ? maxValue : arr[n - 1];
}

int main() {
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }


int maxElement = findMax(arr, n);
    cout<< maxElement << endl;
    return 0;
}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool isPalindrome(string word, int start, int end) {
//    if (start >= end)
//        return true;
//    if (word[start] != word[end])
//        return false;
//    return isPalindrome(word, start + 1, end - 1);
//}
//
//int main() {
//    string word;
//    cin >> word;
//
//    int n = word.length();
//    if (isPalindrome(word, 0, n - 1))
//        cout << "Yes" << endl;
//    else
//        cout << "NO" << endl;
//    return 0;
//}

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int partition(int arr[], int low, int high) {
//    int pivotIndex = low + rand() % (high - low + 1);
//    int pivotValue = arr[pivotIndex];
//    swap(arr[pivotIndex], arr[high]);
//
//    int i = low - 1;
//    for (int j = low; j <= high - 1; j++) {
//        if (arr[j] >= pivotValue) {
//            i++;
//            swap(arr[i], arr[j]);
//        }
//    }
//    swap(arr[i + 1], arr[high]);
//    return i + 1;
//}
//
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        int pivot = partition(arr, low, high);
//        quickSort(arr, low, pivot - 1);
//        quickSort(arr, pivot + 1, high);
//    }
//}
//
//int main() {
//    srand(time(0));
//
//    int arr[100];
//    int n;
//    cin>>n;
//    for(int i = 0; i<n; i++)
//    {
//        cin>>arr[i];
//    }
//
//    quickSort(arr, 0, n - 1);
//
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int arr[100];
//    int n;
//    cin>>n;
//    for(int i = 0; i<n; i++)
//    {
//        cin>>arr[i];
//    }
//
//    sort(arr, arr + n); // Sort the array in O(nlogn)
//
//    int j = 0;
//    for (int i = 0; i < n-1; i++)
//    {
//        // If current element is not equal
//        // to next element then print the current element
//        if (arr[i] != arr[i+1])
//            arr[j++] = arr[i];
//    }
//
//    // Printing the last element
//    // as last element is always single
//    arr[j++] = arr[n-1];
//
//    // Print the remaining elements
//    for (int i = 0; i < j; i++)
//        cout << arr[i] << " ";
//
//    return 0;
//}

//
//#include <iostream>
//
//using namespace std;
//
//// Function to reverse the array
//void reverseArr(int arr[], int start, int end)
//{
//    int temp;
//    while (start < end)
//    {
//        temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//        start++;
//        end--;
//    }
//}
//
//// Driver code
//int main()
//{
//    int arr[100];
//    int n;
//    cin>>n;
//    for(int i = 0; i<n; i++){
//        cin>>arr[i];
//    }
//
//    // Function calling
//    reverseArr(arr, 0, n-1);
//
//    for (int i=0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}
