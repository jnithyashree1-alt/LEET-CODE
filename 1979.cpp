class Solution {
public:
int hcf(int a,int b){
    if(b==0) return a;
    return hcf(b,a%b);
}
    int findGCD('vector<int>& nums') {
        sort(nums.begin(),nums.end());
        return hcf(nums[0],nums[nums.size()-1]);
    }
};
