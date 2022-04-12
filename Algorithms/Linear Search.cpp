#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>v;

int main()
{
    int n, x, item;
    bool flag=0;
    cin >> n;
    while(n--) {
        cin >> x;
        v.push_back(x);
    }

    cin >> item;

    for(int i=0; i<v.size(); i++) {
        if(v[i]==item) {
            flag = 1;
            cout << "Item found on location: " << i+1 <<endl;
            break;
        }
    }

    if(flag==0)
        cout << "Item is not found" <<endl;

    v.empty();

    return 0;
}
