//Gas Station
//Date 23 Sept 2020
//Source https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        bool f1= true;
        bool f2= true;
        for(int i=0;i<gas.size();i++){
            f1= true;
            f2= true;
            int o= gas[i];
            for(int j=i;j<gas.size();j++){
                if(o-cost[j]<0){
                    f1= false;
                    break;
                }
                if(j+1==gas.size()){
                    o=o+gas[0];
                }
                else{
                    o=o+gas[j+1];
                }     
                o=o-cost[j];
            }
            if(!f1){
                continue;
            }
            for(int k=0;k<i;k++){
                if(o-cost[k]<0){
                    f2=false;
                    break;
                }
                if(i==k+1){
                    
                }
                else{
                    o=o+gas[k+1];
                }
                o=o-cost[k];
            }
            if(f2){
                return i;
            }
        }
        return -1;
    }
};
