#include <iostream>
using namespace std;

class solution{

public:
        int binary_search(int num[], int n,int target){
        int start = 0;
        int end = n-1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (num[mid] == target)
                return mid;
            else if (num[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
        }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution s1;
    int ans = s1.binary_search(arr, n, 3);
    cout << "Element found at index: " << ans << endl;

    return 0;
}





