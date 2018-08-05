void MergeSort(int [] a, int L, int R) {

    if (R <= L) return;

    int mid = (R-L)/2 + L;

    MergeSort(a, L, mid);
    MergeSort(a, mid+1, R);
    Merge(a, L, mid, R);
}
