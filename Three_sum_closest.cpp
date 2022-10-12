#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int c = INT_MAX, ans = 0;
        int l,r;
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            l = i+1; r = n-1;
            int s;
            while(l<r){
                s = nums[i]+nums[l]+nums[r];
                if(abs(s-target)<c)
                {
                    c = abs(s-target);
                    ans = s;
                }
                if(s-target>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return ans;
    }

int main(){
  vector<int> nums = {-1,2,1,-4};
  int target = 1;
  cout<<"Closest sum to target number is: "<<threeSumClosest(nums, target)<<endl;
  return 0;
}
