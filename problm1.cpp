#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    string bride;
    string groom;
    cin>>bride;
    cin>>groom;
    for(int i=0;i<bride.size();i++)
    {
        for(int j=0;j<groom.size();j++)
        {
            if(bride.at(i) == groom.at(j))
            {
                flag = 1;
                groom.erase(groom.begin() + j); 
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    cout<<groom.size();
    return 0;
}

