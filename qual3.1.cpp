#include <stdio.h>
#include <iostream>

using namespace std;

int B[100001];
int add(int B[100001], int p,int n,int x){
    int temp=0;
    int count=0;
    for(int b=x;b<=n;b++){
        temp+=B[b];
        if(temp<=p){
            count++;
        }
        else{
            return count;
        }
    }
    return count;
}
int main(){
    FILE *fp =fopen("3.1.txt","w");
    freopen("3.sample.txt","r",stdin);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        long long result=0;
        int n,p;
        cin >> n;
        cin >> p;
        for(int a=1;a<=n;a++){
            cin>>B[a];
        }
        for(int a=1;a<=n;a++){
            result+=add(B,p,n,a);
        }
        printf("Case #%d: %llu\n",i,result);
        fprintf(fp,"Case #%d: %llu\n",i,result);
    }
    
    
}
