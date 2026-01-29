#include <bits/stdc++.h>
using namespace std;
long long mergeCnt(vector<int>&a,int l,int m,int r){
    vector<int>t;
    int i=l,j=m+1; long long cnt=0;
    while(i<=m&&j<=r){
        if(a[i]<=a[j]) t.push_back(a[i++]);
        else{ t.push_back(a[j++]); cnt+=m-i+1; }
    }
    while(i<=m)t.push_back(a[i++]);
    while(j<=r)t.push_back(a[j++]);
    for(int k=l,x=0;k<=r;k++,x++)a[k]=t[x];
    return cnt;
}
long long sortCnt(vector<int>&a,int l,int r){
    if(l>=r) return 0;
    int m=(l+r)/2;
    return sortCnt(a,l,m)+sortCnt(a,m+1,r)+mergeCnt(a,l,m,r);
}
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<sortCnt(a,0,n-1);
}