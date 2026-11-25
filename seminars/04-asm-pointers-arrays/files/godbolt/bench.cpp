int sum_to(int n);
int main() {
    long long t = 0;
    for (int k = 0; k < 20000; ++k) t += sum_to(100000 + k % 7);
    return t & 1;
}
