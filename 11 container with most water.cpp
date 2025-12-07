//11. Container With Most Water
//https://leetcode.com/problems/container-with-most-water/description/
//time complexity: O(n)
//space complexity: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int lp = 0,rp=height.size()-1;

       while(lp < rp){
        int w =rp-lp;
        int ht = min(height[lp],height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater,currWater);

        height[lp] < height[rp] ? lp++ : rp--;
       }
       return maxWater;

    }
};
