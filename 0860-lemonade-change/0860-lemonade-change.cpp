class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int, greater<int>> mp;
        int n =bills.size();
        for(int i=0; i<n;i++){
            if(bills[i]==10) mp[5]--;
            else if(bills[i]==20){
                if(mp[10]!=0){
                    mp[10]--;
                    mp[5]--;
                }else if(mp[10]==0)mp[5] = mp[5]-3;
            }

            if(mp[5]<0 || mp[10]<0) return false;
            mp[bills[i]]++;
        }
        return true;

    }
};