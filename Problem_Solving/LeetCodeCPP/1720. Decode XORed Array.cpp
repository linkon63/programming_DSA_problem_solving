#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:

    int encoded[3] = {1,2,3};
    int first = 1;
    void decode()
    {
        vector<int> vec;
        vec.push_back(first);
        for(int i=0; i<3; i++)
        {
            vec.push_back(vec[i]^encoded[i]);
        }

        for(int i=0; i<4; i++)
        {
            cout<<"Arr:"<<vec[i]<<endl;
        }
    }
};

int main()
{

    Solution solObj;
    solObj.decode();

    return 0;
}
