class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int max_area_with_top=0;
        int max_area=0;
        int tp;
        int n=heights.size();
        int i=0;
        while(i<n){
            if(st.empty()||heights[i]>=heights[st.top()])
                st.push(i++);
            else{
               tp=st.top();
                st.pop();
                max_area_with_top=heights[tp]*(st.empty()?i:i-st.top()-1);
                if(max_area_with_top>max_area){
                    max_area=max_area_with_top;
                }
                
            }
        }
        while(st.empty()==false){
                int tp=st.top();
                st.pop();
                max_area_with_top=heights[tp]*(st.empty()?i:i-st.top()-1);
                if(max_area_with_top>max_area){
                    max_area=max_area_with_top;
                }
        }
        return max_area;
        
    }
};