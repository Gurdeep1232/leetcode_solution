class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
          unordered_map<int,int>m1;
        for(auto x : nums2)
            m1[x]++;
        for(int i =-1000;i<=1000;i++){
                    unordered_map<int,int>m=m1;
                for(int j =0;j<nums1.size();j++){
                       if(m.find(nums1[j]+i) != m.end()){
                              m[nums1[j]+i]--;
                              if(m[nums1[j]+i]==0)
                                  m.erase(nums1[j]+i);
                                  
}
                           if(m.size()==0)
                               return i;
}
}
        return 0;
    }
};