class Solution {
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n=maze.size();
        vector<string> ans;
        string path="";
        helper(maze,0,0,path,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
    void helper(vector<vector<int>>&maze,int r,int c,string &path,vector<string>&ans){
        int n=maze.size();
        // if(r<0||c<0||r>=n||c>=n||maze[r][c]==0){
        //     return;
        // }
        if(r==n-1&&c==n-1){
            ans.push_back(path);
            return;
        }
        maze[r][c]=-1;
         if(r+1>=0 && r+1<n && maze[r+1][c]==1){
           path.push_back('D');
           helper(maze,r+1,c,path,ans);
           path.pop_back();
        }
         if(r-1>=0 && r-1<n && maze[r-1][c]==1){
           path.push_back('U');
           helper(maze,r-1,c,path,ans);
           path.pop_back();
        }
         if(c-1>=0 && c-1<n && maze[r][c-1]==1){
           path.push_back('L');
           helper(maze,r,c-1,path,ans);
           path.pop_back();
        }
         if(c+1>=0 && c+1<n && maze[r][c+1]==1){
           path.push_back('R');
           helper(maze,r,c+1,path,ans);
           path.pop_back();
        }
        maze[r][c]=1;
        
        
        
       // helper(maze,r-1,c,path+"U",ans);
        
       // helper(maze,r,c-1,path+"L",ans);
        //helper(maze,r,c+1,path+"R",ans);
    //    maze[r][c]=1;
    }
};