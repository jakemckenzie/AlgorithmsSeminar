//From pages 295-297 of Hacker's Delight by Henry S. Warren Jr
int isqrt(unsigned x) {
    unsigned a, b, m;
    a = 1;
    b = (x >> 5) + 8;//x >> 5 is the same as x / (2^5)
    if (b > 65535) b = 65535;
    do {
        m = (a + b) >> 1;
        if (m*m > x) b = m - 1;
        else         a = m + 1;
    } while (b >= a);
    return a - 1;
}