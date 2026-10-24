class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        int oldcolor=image[sr][sc];
        if(oldcolor==color){
            return image;
        }
        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc]=color;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int ni=i+dx[k];
                int nj=j+dy[k];
                if(ni>=0&&nj>=0&&nj<n&&ni<m&&image[ni][nj]==oldcolor){
                    image[ni][nj]=color;
                    q.push({ni,nj});
                }
            }
        }
        return image;
    }
};