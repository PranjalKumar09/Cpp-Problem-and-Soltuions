#include <iostream>
using namespace std;

int main() {
    int arr[8] = {2, 3, 5, 6, 7, 8, 9, 10}, target = 13;
    int start = 0, end = sizeof(arr) / sizeof(int) - 1;
    int mid = 0;

    while (start < end - 1) {
        int s_start = start + 1, s_end = end - 1;
        bool if_found = 0;
        while (s_start < s_end) {
            mid = s_start + (s_end - s_start) / 2;
            if (arr[mid] + arr[start] + arr[end] == target) {
                cout << arr[start] << " " << arr[mid] << " " << arr[end] << endl;
                cout << start << " " << mid << " " << end << endl;
                if_found = 1;
                break;
            } else if (arr[mid] + arr[start] + arr[end] > target)
                s_end--;
            else
                s_start++;
        }
        if (if_found) break;
        if (arr[start + 1] + arr[start] + arr[end] < target) {
            start++;
        } else
            end--;
    }
    return 0;
}
