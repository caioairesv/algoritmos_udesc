#include <bits/stdc++.h>

using namespace std;    

int main()
{
    int n =0,menor=n,maior=n;
    cout << "Digite um número, ou 0 para sair: ";
    cin >> n;

    while (n != 0)
    {
        if (n < menor)
        {
            menor = n;
        }
        if (n > maior)
        {
            maior = n;
        }
        cout << "Digite um número, ou 0 para sair: ";
        cin >> n;
    }
    cout << menor - maior << endl;

    
}