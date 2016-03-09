#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool Compare(const int &a,const int &b)
{
        return a>b;
}
int main()
{
        vector<int> vec;
        vec.push_back(7);
        vec.push_back(5);
        vec.push_back(9);
        vec.push_back(0);
        vec.push_back(110);
        vec.push_back(1110);
        vec.push_back(3330);
        vec.insert(vec.begin()+1,444);
//      vec.erase(vec.begin()+2);
//      vec.erase(vec.begin()+1,vec.end()-1);


//before
        vector<int>::iterator it;
        for(it = vec.begin();it != vec.end();it++)
        {
                cout << *it << endl;
        }
//反转范围可选
//      reverse(vec.begin(),vec.end());
//      reverse(vec.begin()+1,vec.end()-1);
//排序
//      sort(vec.begin(),vec.end());
        sort(vec.begin(),vec.end(),Compare);
//after
        for(it = vec.begin();it != vec.end();it++)
        {
                cout << *it << endl;
        }

}
