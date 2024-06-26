// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         unordered_map<int, int>mpp;
//         int count = 0;
//         int n = nums.size();
//         for(int i = 0; i<n; i++){
//             mpp[nums[i]]++;
//         }
//         for(auto ele: mpp){
//             if(ele.second >= 2){
//                 count += 2;
//             }
//             else if(ele.second == 1){
//                 count += 1;
//             }
//         }
//         return count;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {0,0,1,1,1,1,2,3,3};
//     cout <<sol.removeDuplicates(nums);
//    return 0;
// }

// this code give me output but not return the input according the question

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0; 
        for(int n : nums){
            if(i < 2 || n != nums[i-2]){
                nums[i] = n;
                i++;
            }
        }
        return i;
    }
};
int main()
{
     Solution sol;
    vector<int>nums = {0,0,1,1,1,1,2,3,3};
    cout <<sol.removeDuplicates(nums);
   return 0;
}