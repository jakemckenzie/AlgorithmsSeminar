public void qs(int[] list, int left, int right){
    
    int pivot = left;
    int temp = right;

    if(left >= right - 1) return;

    while (left != right) {
        if (pivot == left){
            if (list[pivot] > list[right]) {
                int temp = list[right];
                list[right] = list[pivot];
                list[pivot] = temp;
                pivot = right;
                left++;
            }else{
                right--;
            }

        }else{
            if (list[pivot] < list[left]) {
                int temp = list[left];
                list[left] = list[pivot];
                list[pivot] = temp;
                pivot = left;
                right--;
            }else{
                left++;
            }
        }
    }
    qs(list, 0, right - 1);
    qs(list, right + 1, temp);
}