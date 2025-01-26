// Reverse An Array.

// Input: arr = [1, 4, 3, 2, 6, 5]
// Output: [5, 6, 2, 3, 4, 1]
// Explanation: The elements of the array are 1 4 3 2 6 5. After reversing the array, the first element goes to the last position, the second element goes to the second last position and so on. Hence, the answer is 5 6 2 3 4 1.

class Solution
{
private:
   void rev(vector<int> &arr,int start,int end){
    if(start >= end) return; //Base case.
    swap(arr[start],arr[end]); //Swap elements at start and end indices.
    rev(arr,start+1,end-1); //Recursive call for remaining elements.
   }
public:
   void reverseArray(vector<int> &arr){
    rev(arr,0,arr.size()-1); //Call the rev function to reverse the array.
   }
};
