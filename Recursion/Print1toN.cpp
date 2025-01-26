// Print 1 To N Without Loop

// Input: n = 10
// Output: 1 2 3 4 5 6 7 8 9 10

class Solution {
    public:
       void printNos(int n){
        if(n == 1) {
            cout << " 1 ";
            return;
        }
        printNos(n-1);
        cout << n << " ";
       }
}