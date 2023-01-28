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
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * nxt;
};

class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        head = NULL;
    }

    // Creates a new node with data = value and nxt = NULL
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    // insert new value at the head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        // if head is not null
        a->nxt = head;
        head = a;
    }
    // print the linkedlist
    void Traverse()
    {
        node *a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n\n";
    }
    // search for a single value
    int SearchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    // search all possible occurrence
    void SearchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                cout<<"Index at :"<<index<<endl;
            }
            a = a->nxt;
            index++;
        }
    }
    // getSize
    int getSize()
    {
        node *a = head;
        int llSize = 0;
        while(a != NULL)
        {
            a = a->nxt;
            llSize++;
        }
        return llSize;
    }
    // getValue
    int getValue(int index)
    {
        node *a = head;
        int index1 = 0;
        while(a != NULL)
        {
            if(index == index1)
            {
                return a->data;
            }
            a = a->nxt;
            index1++;
        }
        return -1;
    }
    /* Function to reverse the linked list */
    Node* printReverse()
    {
        node* node0;
        if (node0 == NULL)
            return NULL;
        if (node0->nxt == NULL)
        {
            head = node0;
            cout<<node0<<" ";
        }
        node* node1 = printReverse();
        node1->nxt = node0;
        node0->nxt = NULL;
        cout<<node0<<" ";
    }
};

int main()
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";
    l.Traverse();

    l.printReverse();

    l.Traverse();

//    l.Traverse();
//    l.swapFirst();
//    l.Traverse();
//    l.printReverse(l.head);

//    l.InsertAtHead(10);
//    // l.Traverse();
//    l.InsertAtHead(30);
//    // l.Traverse();
//    l.InsertAtHead(20);
//    // l.Traverse();
//    l.InsertAtHead(32);
//    l.InsertAtHead(40);
//    l.InsertAtHead(40);
//    l.Traverse();
//    cout<<"Size of linkedList : "<<l.getSize()<<endl;
//    cout<<"getValue(index) of linkedList : "<<l.getValue(3)<<endl;
//    l.reverse(l.head);
//    l.Traverse();
//    l.SearchDistinctValue(5);
    // int ans = l.SearchDistinctValue(30);
    // int ans = l.SearchAllValue(30);
//    cout<<"Found the index : "<<l.SearchDistinctValue(10)<<endl;
//    l.SearchAllValue(30);


    return 0;
}

//
//#include<bits/stdc++.h>
//using namespace std;
//void findMissing(vector<int>arr, int N)
//{
//    int i;
<<<<<<< HEAD
//    vector<int> temp(N + 1);
=======
//    int temp[N + 1];
>>>>>>> 342e9d7a2f93ec3699dc269f7ce4e025ca449d73
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
<<<<<<< HEAD
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
=======
//
//    int n;
//    cin>>n;
//    vector<int>a;
//    for(int i = 0; i<n; i++){
//        cin>>a[i];
//    }
//
//    findMissing(a, n); //a.size()
>>>>>>> 342e9d7a2f93ec3699dc269f7ce4e025ca449d73
//    return 0;
//}
