#include <iostream>
using namespace std;

void sortZeroOne(vector<int>& nums){
    int n = nums.size();
    int index = 0;
    int left = 0;
    int right = size-1

    while(left <= right){
        if(nums[index] = 0){
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index] = 2){
            swap(nums[index], nums[right]);
            right--;
            // no need to index++;
        }
        else {
            index++;
        }
    }
}


int main(){
    vector<int>vec = {0,1,2,2,0,1};
    int nums = 6;
    
    sortZeroOne(vec, nums);
}