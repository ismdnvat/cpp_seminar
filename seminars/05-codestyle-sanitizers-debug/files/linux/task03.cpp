int main() {
    int* numbers = new int[10];
    delete[] numbers;
    delete[] numbers;
    return 0;
}
