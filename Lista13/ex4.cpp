#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n;
    double somaHarmonica=0,soma=0, mediaHarmonica =0, mediaAritmetica =0;

    cout << "Digite a quantidade de numeros: " << endl;
    cin >> n;

    for(int i =0; i < n; i++)
    {
        cin >> a;
        if(a >0)
        {
            soma += a;
            somaHarmonica +=1.0/a;
        }   
    }
    
    mediaAritmetica = soma / n;
    mediaHarmonica = n/ somaHarmonica ;

    cout << "Média Aritmetica: " << mediaAritmetica << endl;            
    cout << "Média Harmonica: " << mediaHarmonica << endl;


}