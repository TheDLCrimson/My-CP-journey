# include <bits/stdc++.h>
using namespace std;

int n,ans[8],k[8],b[8][2]; string a[7][6]; bool used[9];


void show(){
    for (int i=0; i<8; ++i)
        for (int j=0; j<n; ++j){
            if (k[i]==b[j][0])
                if (k[i-1]!=b[j][1] && k[i+1]!=b[j][1])
                    return;
            if (k[i]==b[j][1])
                if (k[i-1]!=b[j][0] && k[i+1]!=b[j][0])
                    return;
        }
    for (int i=0; i<7; ++i)
        if (k[i]>ans[i])
            return;
    for (int i=0; i<8; ++i)
        ans[i]=k[i];
}

void bacctracc(int pos){
    if (pos==8){
        show();
        return;
    }
    for (int i=1; i<=8; ++i)
        if (used[i]==false)
        {
            k[pos]=i;
            used[i]=true;
            bacctracc(pos+1);
            used[i]=false;
        }
}

int change(string x){
    if (x=="Beatrice") return 1;
    if (x=="Belinda") return 2;
    if (x=="Bella") return 3;
    if (x=="Bessie") return 4;
    if (x=="Betsy") return 5;
    if (x=="Blue") return 6;
    if (x=="Buttercup") return 7;
    if (x=="Sue") return 8;
}

int main(){
	freopen("lineup.in","r",stdin);
	freopen("lineup.out","w",stdout);
    cin >> n;
    for (int i=0; i<n; ++i)
        for (int j=0; j<6; ++j)
            cin >> a[i][j];
    for (int i=0; i<n; ++i){
        b[i][0]=change(a[i][0]);
        b[i][1]=change(a[i][5]);
    }
    for (int i=0; i<8; ++i) ans[i]=9;
    bacctracc(0);
    for (int i=0; i<8; ++i){
        if (ans[i]==1) cout << "Beatrice" << endl;
        if (ans[i]==2) cout << "Belinda" << endl;
        if (ans[i]==3) cout << "Bella" << endl;
        if (ans[i]==4) cout << "Bessie" << endl;
        if (ans[i]==5) cout << "Betsy" << endl;
        if (ans[i]==6) cout << "Blue" << endl;
        if (ans[i]==7) cout << "Buttercup" << endl;
        if (ans[i]==8) cout << "Sue" << endl;
    }
}



