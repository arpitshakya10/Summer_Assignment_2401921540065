class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0,rp=n-1,mw=0;
        while(lp<rp){
                int wd=rp-lp;
                int ht=min(height[lp],height[rp]);
                int currwater=wd*ht;

                mw=max(currwater,mw);
                height[lp]<height[rp] ? lp++ : rp--;
            }
        return mw;
}
};
