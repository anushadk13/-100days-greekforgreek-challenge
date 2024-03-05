Maximum Index
Given an array a of n positive integers. The task is to find the maximum of j - i subjected to the constraint of a[i] < a[j] and i < j.
ex:
Input:
n = 2
a[] = {1, 10}
Output:
1
Explanation:
a[0] < a[1] so (j-i) is 1-0 = 1.

  solution:
class Solution{
public:
    int maxIndexDiff(int arr[], int n) 
{
         vector<int> right(n); // max, j
        vector<int> left(n);  // min, i
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
      {
        left[i] = min(arr[i], left[i - 1]);
    }

    for (int j = n - 2; j >= 0; j--) 
    {
        right[j] = max(arr[j], right[j + 1]);
    }

    int i = 0, j = 0, ans = INT_MIN;
    while (j < n && i < n)
      {
        if (left[i] <= right[j]) 
        {
            ans = max(ans, j - i);
            j++;
        } 
        else 
        {
            i++;
        }
    }

    return ans;
    }

};
