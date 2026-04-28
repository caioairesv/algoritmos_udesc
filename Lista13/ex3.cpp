#include<bits/stdc++.h>
using namespace std;

int x=0,w=0,fahn;
int main()
{
    cin>> x >> w;
    
    for(x; x <= w; x+=2)
    {
        fahn = (x * 1.8) + 32;
        cout << x << " - "<< fahn     << endl;
    }

}