# include <bits/stdc++.h>
using namespace std;
typedef vector<int> vii;
typedef pair <long long,int> vi;

vector <vii> a;
int n,m,x,y,i,check,stap,ans[1000];
vi t[1000];

int main(){
	freopen("ALBINUTA.inp","r",stdin);
	freopen("ALBINUTA.out","w",stdout);
    cin >> n >> m;
    a.assign(n+1,vii());
    for (int i=1; i<=n; ++i){
        cin >> x;
        for (int j=0; j<x; ++j){
            cin >> y;
            a[i].push_back(y);
        }
    }
    for (int i=0; i<m; ++i){
        cin >> t[i].first;
        t[i].second=i;
    }
    sort(t,t+m);
    //for (int i=0; i<m; ++i)
    //	cout << t[i].first << " ";
    i=1; check=1; stap=1;
    if (t[0].first==1) ans[t[0].second]=1;
    while(i<m)      
    {
    	//cout << (check-1)%a[stap].size() << " ";
        stap=a[stap][(check-1)%a[stap].size()];
        
        if(check+1==t[i].first) 
        {
        	//cout << stap;
            ans[t[i].second]=stap;
            ++i;
        }
        
        ++check;
    }
    //cout << endl; 
    for (int i=0; i<m; ++i)
    	cout << ans[i] << endl;
}

