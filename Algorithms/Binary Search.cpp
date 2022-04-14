#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

vector <int> v;

int main()
{
    int n, x, item, beg, ends, mid;
    bool flag = 0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }

    cin >> item;

    beg = 0;
    ends = v.size()-1;
    while(beg<=ends)
    {
        mid = (beg+ends)/2;
        if(v[mid]==item)
        {
            flag = 1;

            cout << "Item found on location: " << mid+1 << endl;
            break;
        }
        else if(v[mid]<item)
            beg = mid+1;
        else
            ends = mid-1;
    }

    if(flag==0)
        cout << "Item not found" << endl;

    v.empty();

    return 0;
}
