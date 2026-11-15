class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>m;
        for(int i =0;i<items1.size();i++){
            
            m[items1[i][0]] = items1[i][1];
        }
        for(int i =0;i<items2.size();i++){
            
            m[items2[i][0]] += items2[i][1];
        }
        vector<vector<int>>ans;
        for(auto x : m){
            vector<int>k;
            k.push_back(x.first);
            k.push_back(x.second);
            ans.push_back(k);
        }

        return ans;
    }
};