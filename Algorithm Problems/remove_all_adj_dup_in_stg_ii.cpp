//Remove All Adjacent Duplicates in String II
//Date 7 April 2021
//Souce https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

class Solution {
public:
    string removeDuplicates(string s, int k) {
        string front;
        string back;
        while(true){
            bool del=false;
            bool last= false;
            int ss=0;
            char p=s[0];
            for(int i=1; i<s.length(); i++){
                if(p==s[i]){

                }else{
                    int ndelete= i-ss;
                    if(ndelete>=k){
                        // how many set to be deleted
                        int nk= ndelete/k;
                        front = s.substr(0,ss);
                        back= s.substr(ss+nk*k,s.length());
                        s= front+back;
                        del= true;
                        break;
                    }
                    ss= i;
                    p= s[i];
                }
                if(i==s.length()-1){
                    last= true;
                }
            }
            if (!del && !last){
                break;
            }else if(last){
                int ndelete= s.length()-ss; 
                if(ndelete>=k){
                    // how many set to be deleted
                    int nk= ndelete/k;
                    front= s.substr(0,ss);
                    back= s.substr(ss+nk*k,s.length());
                    s= front+back;
                }
                break;
            }
        }
        return s;
    }
};
