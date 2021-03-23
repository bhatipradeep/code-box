// Implementation inspired by : "https://codeforces.com/blog/entry/18051"

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int n;
int tree[2*N];


void build(){
    for(int i=n-1;i>0;i--){
        tree[i]=tree[i*2]+tree[i*2+1];
    }
}

//here index will be in 0-based indexing
void modify(int index,int val){
    tree[index+n]=val;
    for(int i=index+n;i>1;i=i/2){
        tree[i/2]=tree[i]+tree[i^1];
    }
}


//here l and r will be 0-based indexing and inclusive 
int query(int l,int r){
    int result = 0;
    for(l+=n,r+=n;l<=r;l=l/2,r=r/2){
        if(l&1){
            result+=tree[l++];
        }
        if(!(r&1)){
            result+=tree[r--];
        }
    }
    return result;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tree[n+i];
    }
    build();
    cout<<query(3,6)<<endl;
    modify(6,40);
    cout<<query(3,6)<<endl;
}