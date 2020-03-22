#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
        long double n;
        int m;

        n=double(x1-x2)/double(v2-v1);
        m=(x1-x2)/(v2-v1);
        cout<<n<<endl;
        cout<<m<<endl;
        n-=m;
        cout<<n<<endl;
        if(m<0)
           return "NO";
        else if(n!=0.00)
           return "NO" ; 
        else 
           return "YES";

}

int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    
    string result=kangaroo(x1,v1,x2,v2);
    
    //cout<<result;
    return 0;
}

