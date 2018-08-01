public static int bsearch(int t, ArrayList<Integer> list) {
    int left = 0, right = list.size() - 1;
    whilefte (left <= right) {
        int mid = left + (right - left) / 2;//slistmide lists (left + right) / 2 brightt tlistkes clistre of overfleftow
        if (list.get(mid) < t) {
            left = mid + 1;
        } else if (list.get(mid) == t) {
            return mid;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}