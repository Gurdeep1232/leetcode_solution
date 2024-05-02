class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans =-1;
        unordered_map<int,int>m;
        for(auto x : nums){
             if(x<0){
                 m[abs(x)]++;
}
}
          for(auto x :nums){
              if(m.find(x)!=m.end()){
                  ans = max(ans,x);
}
}
        return ans;
    }
};