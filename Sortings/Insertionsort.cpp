
for(int i=1;i<n;i++){
    int curr=arr[i];
    int prev=i-1;

    while(prev>=0 && arr[prev]>curr){
        arr[prev+1]=arr[prev];
        prev--;
    }

    arr[prev+1]=curr;
}

/*Time Complexity

Best case=O(n)
Average case=O(n*n)
Worst case=O(n*n)

Space Complexity=O(1)*/

