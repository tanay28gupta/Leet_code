class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i=0;i<nums1.size();i++)
        {
            for (int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    int k;
                    for (k=0;k<ans.size();k++)
                    {
                        if(ans[k]==nums1[i])
                        {
                            break;
                        
                        }
        
                    }
                     if(k==ans.size())
                        {
                            ans.push_back(nums1[i]);
                        }
                    
                }
               
            }
        }
        return ans; 
    }
};