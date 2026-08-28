#include<bits/stdc++.h>
using namespace std;

bool isvalid(int arr[],int n,int m,int maxallowedpages){

    int stu=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxallowedpages){
            return false;
        }
        else if(arr[i]+pages<=maxallowedpages){
            pages+=arr[i];
        }
        else{
            stu++;
            pages=arr[i];
        }
    }

    if(stu>m){
        return false;
    }
    else{
        return true;
    }
}

int allocatedpages(int arr[],int n,int m){

    if(m>n){
        cout<<"allocation not possible";
        return -1;
    }

    int sum=0;
    int ans=-1;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int st=0;
    int end=sum;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(isvalid(arr,n,m,mid)){
              ans=mid;
              end=mid-1;
        }
        else{
            st=mid+1;
        }
    }

    return ans;

}

int main(){
    int n,m;

    cout<<"enter n(books) :";
    cin>>n;
    cout<<"enter m(students)";
    cin>>m;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int answer=allocatedpages(arr,n,m);

    cout<<answer;

    return 0;
}