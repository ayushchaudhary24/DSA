class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n =heights.size();
        int max_area = 0;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int h =heights[st.top()];
                st.pop();
                int left;
                if(st.empty()) left =-1;
                else left = st.top();
                int area = h*(i-left-1);
                max_area = max(max_area,area);
            }
            st.push(i);

        }

            while(!st.empty()){
                int h =heights[st.top()];
                st.pop();
                int left;
                if(st.empty()) left =-1;
                else left = st.top();
                int right = n;
                int area = h*(n-left-1);
                max_area = max(max_area,area);
            }
        
        return max_area;
    }
};