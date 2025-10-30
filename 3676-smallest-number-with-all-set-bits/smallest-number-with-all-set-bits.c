int smallestNumber(int n) {
    int res = 1;
    while (res < n+1) res *= 2;
    return res-1;
}