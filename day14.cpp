// Qlink->  https://leetcode.com/problems/find-the-difference-of-two-arrays/description/
// Code->

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> s1;
        for(auto i:nums1)
        {
            s1.insert(i);
        }
        for(auto i:nums2)
        {
            s1.insert(i);
        }
        vector<vector<int>> v;
        unordered_set <int> s2 = s1;
        cout<<s2.size()<<"";
        cout<<s1.size()<<endl;
        for(int i=0;i<nums2.size();i++)
        {
            // s1.erase(s1.find(nums2[i]), s1.end());
            if(s1.find(nums2[i]) != s1.end())
            {
                s1.erase(nums2[i]);
            }
        }

        for(int i=0;i<nums1.size();i++)
        {
            if(s2.find(nums1[i]) != s2.end())
            {
                s2.erase(nums1[i]);
            }
        }
        vector<int> v1;
        for(auto i:s1)
        {
            v1.push_back(i);
        }
        v.push_back(v1);
        v1.clear();
        for(auto i:s2)
        {
            v1.push_back(i);
        }
        v.push_back(v1);

        return v;
        
    }
