#include <iostream>
#include <vector>
using namespace std;

void sortZeroOne(vector<int>& nums){
    int n = nums.size();
    int index = 0;
    int left = 0;
    int right = n-1;

    while(index <= right){
        if(nums[index] == 0){
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index] == 2){
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
    
    sortZeroOne(vec);

    cout << "Sorted Array: " << endl;
    for(int num : vec){
        cout << num << " ";
    }

    return 0;
}