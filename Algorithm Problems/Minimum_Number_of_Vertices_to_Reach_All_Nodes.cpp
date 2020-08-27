//Minimum Number of Vertices to Reach All Nodes
//Date 27 Aug 2020
//Source 

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> res;
        vector<int> in(n,0);
        for(auto a:edges){
            in[a[1]]++;
        }
        for(int i=0;i<n;i++){
            if(in[i]==0){
                res.push_back(i);
            }
        }
        return res;
    }
};
