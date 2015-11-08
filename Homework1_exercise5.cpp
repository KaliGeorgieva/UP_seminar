#include <iostream>

using namespace std;

int main()
{
    int n, k=1,j=0, p;
    cout << "Enter n<=200:" << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        for(p=j+1; p<=j+k; p++){
            if(p<=n){
                cout << p << " ";
                i=j;}
            else
                cout << "*";
        }
        j=p-1;
        k++;
        cout << endl;
    }

    return 0;
}
