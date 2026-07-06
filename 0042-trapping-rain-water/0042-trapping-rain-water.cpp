class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=height.size() - 1;
        int leftm=0,rightm=0;
        int wat=0;
        
        while(left<right) {
            if(height[left]<height[right]) {
                if(height[left]>=leftm)
                    leftm=height[left];
                else
                    wat+=leftm-height[left];
                left++;
            }else{
                if(height[right]>=rightm)
                    rightm=height[right];
                else
                    wat+=rightm-height[right];
                right--;
            }
        }
        return wat;
    }
};