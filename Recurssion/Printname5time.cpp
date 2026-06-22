#include<iostream>
using namespace std;

void Name(int i, int n)
{
    if(i == n  )
        return;

    

    Name(i +1, n);
    cout << i<< endl;
}

int main()
{
    int n;
    cin >> n;

    Name(1, n);

    return 0;
}