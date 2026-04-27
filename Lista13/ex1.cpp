#include <bits/stdc++.h>

using namespace std;    

int main()
{
    int x= 1, y= 1,soma=0;
    
    cin >> x >> y;
    

    if (x > y)
    {   

        for (y= y + 1; y < x; y++)
        {
            if (y % 2 != 0)
            {
                soma += y;   
            }
            
        }
    }
    else if (y > x)
    {
        
        for (x = x +1 ; x < y; x++)
        {
            if (x % 2 != 0)
            {
                soma += x;
            }
        }
    }
    cout << soma << endl;
}       

