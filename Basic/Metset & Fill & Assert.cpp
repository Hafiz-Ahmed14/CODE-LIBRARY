//memset and fill
memset(a, 0, sizeof(a));
memset(a, -1, sizeof(a));
memset(a, 'a', sizeof(a));
fill(a, a + 10, 10);


int divid(int a, int b) {
    // if b not equal to zero its work , otherwise not work
    assert(b != 0);
    return a / b;
}