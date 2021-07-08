//Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).

//The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).

//You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).
  class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     long long int i,x,y,p;
        vector<pair<int,int>>v;
        for(i=0;i<points.size();i++)
        {
            x=points[i][0];
            y=points[i][1];
            p=(x*x)+(y*y);
            v.push_back({p,i});
        }
        sort(v.begin(),v.end());
        i=0;
        vector<vector<int>>v1;
        while(k>0)
        {
            v1.push_back(points[v[i].second]);
            k--;
            i++;
        }
        return v1;
    }
};
