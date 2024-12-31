public class Solution {
    public int findDuplicate(int[] nums) {
        if (nums == null || nums.length <= 1) {
            return -1;
        }    

    int slow = 0;
    int fast = 0;
    int finder = 0;

    while (true)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];

        if (slow == fast)
            break;
    }
    while (true)
    {
        slow = nums[slow];
        finder = nums[finder];
        if (slow == finder)
            return slow;
    }

//----------------------------------------------------------------------------//
// C++ code for the above approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find the duplicate 
// value in the given array arr[] 
void findDuplicate(int arr[]) 
{ 
  
    // Initialise variables 
    int tortoise = arr[0]; 
    int hare = arr[0]; 
  
    // Loop till we find the 
    // duplicate element 
    while (1) { 
  
        tortoise = arr[tortoise]; 
  
        // Hare moves with twice 
        // the speed of tortoise 
        hare = arr[arr[hare]]; 
        if (tortoise == hare) 
            break; 
    } 
  
    tortoise = arr[0]; 
  
    // Loop to get start point 
    // of the cycle as start 
    // point will be the duplicate 
    // element 
    while (tortoise != hare) { 
        tortoise = arr[tortoise]; 
        hare = arr[hare]; 
    } 
  
    // Print the duplicate element 
    cout << tortoise; 
} 
  
// Driver Code 
int main() 
{ 
    // Given array 
    int arr[] = { 2, 6, 4, 1, 3, 1, 5 }; 
  
    // Function Call 
    findDuplicate(arr); 
  
    return 0; 
} 