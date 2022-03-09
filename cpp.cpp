#include <bits/stdc++.h>

int terSearch(int *arr, int item, int a, int d) 
{
    int b, c;
    int res = 0;
    while (a <= d && res == 0) {
        int step = (d - a + 1) / 3;
        b = 1 + step + a;
        c = 1 + 2 *step + a;
        if (item == arr[0]) res = 1;
        else if (item == arr[b]) res = b + 1;
        else if (item == arr[c]) res = c + 1;
        else if (item > arr[c]) a = c + 1;
        else if (item > arr[b]) {a = b + 1; d = c - 1;}
        else d = b - 1;
    }
    return res;
}

int main()
{
    int arr[16] = {1, 2, 3, 5, 6, 7, 8, 10, 12, 13, 15, 16, 18, 19, 20, 22};
    std::cout << terSearch(arr, 1, 0, 15);
}