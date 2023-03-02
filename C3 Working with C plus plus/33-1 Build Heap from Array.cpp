#include <bits/stdc++.h>

using namespace std;

class MaxHeap
{
public:
    vector<int>nodes;

    MaxHeap()
    {

    }

    // order of log O(logn);
    void up_heapify(int idx)
    {
        while(idx > 0 && nodes[(idx -1) / 2])
        {
            swap(nodes[idx], nodes[(idx -1) / 2]);
            idx = (idx -1) / 2;
        }
    }
    //O(logn);
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    // O(n)
    void PrintHeap()
    {
        for(int i = 0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<endl;
    }
    // o(logn)
    void down_hepify(int idx)
    {
        while(1)
        {
            int largest = idx;
            int l = 2*idx+1;
            int r = 2*idx+2;

            if(l<nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if(largest == idx)
            {
                break;
            }
            swap(nodes[idx], nodes[largest]);
            idx = largest;

        }
    }

    void Delete(int idx)
    {
        if(idx >= nodes.size() )
        {
            return;
        }
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_hepify(idx);
    }
    //o(1)
    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        return nodes[0];
    }
    //o(logn)
    int ExtractMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }
    void build_from_array(vector<int>&a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = n/2 - 1;
        for(int i = last_non_leaf; i>=0; i--)
        {
            down_hepify(i);
        }
    }

};

vector<int> heap_sort(vector<int>a)
{
    MaxHeap h;
    h.build_from_array(a);
    vector<int>ans;
    for(int i = 0; i<a.size(); i++){
        ans.push_back(h.ExtractMax());
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


int main()
{
//    MaxHeap h;
//    vector<int> a = {1,2,3,4,10,9,8,7};
//    h.build_from_array(a);
//    h.PrintHeap();

    MaxHeap h;
    vector<int> a = {1,2,3,4,10,9,5,7};
    heap_sort(a);
    vector<int> sorted_a = heap_sort(a);
    for(int i = 0; i<sorted_a.size(); i++){
        cout<<sorted_a[i]<<" ";
    }

    return 0;
}
