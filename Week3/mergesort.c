void MergeSort(int [] a, int L, int R) {
    if (R <= L) return;         // 1
    int mid = (R+L)/2;          // 2
    MergeSort(a, L, mid);       // 3
    MergeSort(a, mid+1, R);     // 4
    Merge(a, L, mid, R);        // 5
}
