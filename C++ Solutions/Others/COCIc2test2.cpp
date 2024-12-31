# include <bits/stdc++.h>
using namespace std;

int n,a[100000],c[100000],h,k,l,o; 
long long b[100000],d[100000],e[100000]; 
bool check,change,used[100000];

void show(){
    h=0; k=0; l=0; o=0;
    if ((c[0]!=5 && c[0]!=6) || (c[n-1]!=7 && c[n-1]!=8)) return;
    for (int i=0; i<n; i++){
        if (c[i]==1)
            if (c[i+1]!=3 && c[i+1]!=4 && c[i+1]!=8) return;
        if (c[i]==2) 
            if (c[i+1]!=7 && c[i+1]!=2 && c[i+1]!=1) return;
        if (c[i]==3)
            if (c[i+1]!=4 && c[i+1]!=8 && c[i+1]!=3) return;
        if (c[i]==4)
            if (c[i+1]!=1 && c[i+1]!=2 && c[i+1]!=7) return;
        if (c[i]==5){
            if (c[i+1]!=3 && c[i+1]!=4 && c[i+1]!=8) return;
            ++h;
        }
        if (c[i]==6){
            if (c[i+1]!=1 && c[i+1]!=2 && c[i+1]!=7) return;
             ++k;
        }
        if (c[i]==7) ++l;
        if (c[i]==8) ++o;
    }
    
    if ((h>0 && k>0) || (l>0 && o>0) || h>1 || k>1 || l>1 || o>1) return;
	
    change=false;
    if (e[0]==0)
        for (int i=0; i<n; i++){
            e[i]=d[i];
    }
    else{
        for (int i=0; i<n; i++){
            if (e[i]>d[i]){
                change=true;
                break;
            }
        }
        if (change==true)
            for (int i=0; i<n; i++)
                e[i]=d[i];
    }
}

void bacctracc(int pos){
    if (pos==n){
        show();
        return;
    }
    for (int i=0; i<n; i++)
        if (used[i]==false){
            c[pos]=a[i]; d[pos]=b[i];
            used[i]=true;
            bacctracc(pos+1);
            used[i]=false;
        }
}

int main(){
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i] >> b[i];
    for (int i=0; i<n; i++) e[i]=0;
    for (int i=0; i<n; i++) used[i]=false;
    bacctracc(0);
	if (e[0]==0) cout << -1;
	else
    	for (int i=0; i<n; i++)
        	cout << e[i] << " ";
}