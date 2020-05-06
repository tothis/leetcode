#include "../common/out.c"

int main() {
    int arr[20] = {1, 1};
    for (int i = 2; i < 20; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    outInt(arr, sizeof(arr) / 4);
    return 0;
}