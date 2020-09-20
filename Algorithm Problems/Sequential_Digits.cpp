//Sequential Digits
//Date 20 Sept 2020
//Source https://leetcode.com/problems/sequential-digits/

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        string d= "123456789";
        
        for(int i=0;i<d.length();i++){
            int ll= to_string(low).length();
            int hl= to_string(high).length();
            if(i+ll<10){
                for(int j=ll; j<=hl; j++){
                    if(j+i > 9){
                        continue;
                    }
                    string s= d.substr(i, j);
                    int t= stoi(s);
                    if(t>= low && t<=high){
                        res.push_back(t);
                    }
                }
            }
            
        }
        sort(res.begin(), res.end());
        return res;
    }
};
