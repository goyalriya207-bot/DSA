void mergesort(int arr[], int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;

        // Left half sort
        mergesort(arr, st, mid);

        // Right half sort
        mergesort(arr, mid + 1, end);

        // Merge both sorted halves
        merge(arr, st, end, mid);
    }
}

void merge(int arr[], int st, int end, int mid) {
    vector<int> temp;
    int i = st;
    int j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }
}

Time Complexity

Best case=O(nlogn)
Average case=O(nlogn)
Worst case=O(nlogn)

Space Complexity=O(n)