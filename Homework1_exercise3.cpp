#include <iostream>

using namespace std;

int main()
{
    int x, n, t, r, k;

    cout << "Enter x (x>=1) and n:" << endl;
    cin >> x >> n;

    t=x+7-(x%7);
    r=x+9-(x%9);

    if(t>=r)
        k=r;
    else
        k=t;

    for(int i=1; i<=n; i++){
            if(k%7==0){
                for(int j=k; j<=k; j=k+9){
                    cout << i << ". " << j << endl;
                    k=(j/7)*9;
                }
            }
            else if(k%9==0){
                for(int g=k; g<=k; g=k+7){
                    cout << i << ". " << g << endl;
                    k=(g/9+1)*7;
                }
            }
    }

    return 0;
}
