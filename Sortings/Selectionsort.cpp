void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si=j;
            }
        }

        swap(arr[si],arr[i]);
    }
}

/*Time Complexity

Best case=O(n*n)
Average case=O(n*n)
Worst case=O(n*n)

Space Complexity=O(1)*/
