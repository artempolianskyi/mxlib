double mx_pow(double n, unsigned int pow) {
    double r = 1;
    for (double d = 0; d < pow; d++)
        r *= n;
    return r;
}
