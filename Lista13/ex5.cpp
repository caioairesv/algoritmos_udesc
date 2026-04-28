#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int num,den,n;
double resultado,soma1 =0,soma2 =0;
int main()
{

cin >> n;
n +=1;
for (int i =1; i <n ; i++ )
{
    num +=2;
    den+= 3;

    soma1 += num/den;
}

for (int j =1; j < n; j++)
{
    den =1;
    if (j % 2 !=0)
    {
        den*(-1);
    }

    soma2+= j/den;    
}
cout << "Soma do primeiro: " << soma1 << "\nSoma do segundo: "<< soma2;
} 