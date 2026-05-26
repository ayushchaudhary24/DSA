class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxi = 0;

        for(int i =0; i<n;i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int h = heights[st.top()]; 
                st.pop(); 
                int left;
                if(st.empty()){
                    left = -1;
                }
                else left = st.top(); 
                int right = i; 
                maxi = max(maxi, h*(right-left-1));
            }
            st.push(i);
        }
        while (!st.empty()){
            int h = heights[st.top()]; 
            st.pop(); 
            int left;
            if(st.empty()){
                left = -1;
            }
            else left = st.top(); 
            int right = n; 
            maxi = max(maxi, h*(right-left-1));
        }
        return maxi;
    }
};