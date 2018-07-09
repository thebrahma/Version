#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector <int> sum(vector<int> &x)
{
    int size = x.size();
    int carry = 0,temp = 0;
    while(size--)
    {
        temp = x[size] + 1;
        if(temp == 10)
        {
            x[size] = 0;
            carry = 1;
        }
        else
        {
            x[size] = temp;
            carry = 0;
            break;
        }
    }
    vector <int> vtr;
    vector <int> :: iterator itr;
    itr = x.begin();

            if(carry == 1)
            {
                vtr.push_back(1);
            }
            else
            {
                while(*itr == 0)
                {
                    itr++;
                }
            }
            while(itr!=x.end())
            {
                    vtr.push_back(*itr);
                    itr++;
            }
        return vtr;


}
int main()
{
        vector <int> arr;
        int flag;
        for(int i=0;i<7;i++)
        {
            cin>>flag;
            arr.push_back(flag);
        }
        arr = sum(arr);
        vector <int> :: iterator itr ;
        itr = arr.begin();
        while(itr!=arr.end()){
            cout<<*itr;
            itr++;
        }
        

    return 0;
}