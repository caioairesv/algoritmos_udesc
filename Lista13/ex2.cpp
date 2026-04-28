#include <bits/stdc++.h>

using namespace std;    

int main()
{
    int n =0,i=0,j,menor=0,maior=0;

    cin >> n;
    while (i < n)
    {
        cin >> j;
        i++;
        if(i == 1)
        {
            menor = j;
            maior = j;
        }

        if (j< menor)
        {
            menor = j;
        }
        if (j > maior)
        {
            maior = j;
        }
    }
    cout << maior - menor << endl;

    
}