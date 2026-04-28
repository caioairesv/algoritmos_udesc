#include<bits/stdc++.h>
using namespace std;

int n;
float resultado,soma1 =1.0/2.0,soma2 =0.0,num=1.0,den=2.0;

int main()
{

cin >> n;
for (int i =1; i <= n ; i++ )
{
    soma1 += num/den;
    num +=2;
    den+= 3;

}

for (int j =1; j <= n; j++)
{   
    num =1.0;
    if (j % 2 ==0)
    {
        num = -num;
    }

    soma2+=num/j;    
}
cout << "Soma dos primeiro: " << fixed<< setprecision (1) << soma1 << "\nSoma do segundo: "<< soma2;
} 