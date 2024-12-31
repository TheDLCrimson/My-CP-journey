#include<bits/stdc++.h>
#define int long long int
using namespace std;
string s[6]={"abcabc","acbacb","bacbac","bcabca","cabcab","cbacba"},a,b;
string c[6]={"abc","acb","bac","bca","cab","cba"};
int n,i,j;
main(){
    cin>>n>>a>>b;
    for(i=0;i<6;i++)
        if(s[i].find(a)==-1&&s[i].find(b)==-1){
            puts("YES");
            for(j=0;j<3*n;j++)cout<<s[i][j%3];
            return 0;
        }
     for(i=0;i<6;i++)if(c[i].find(a)==-1&&c[i].find(b)==-1){
            puts("YES");
            for(j=0;j<n;j++)cout<<c[i][0];
            for(j=0;j<n;j++)cout<<c[i][1];
            for(j=0;j<n;j++)cout<<c[i][2];
            return 0;
        }
    puts("NO");
}