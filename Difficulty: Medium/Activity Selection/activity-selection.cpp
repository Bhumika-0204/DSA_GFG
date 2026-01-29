class Activity{
    public:
    int start;
    int finish;
    
};
bool compare(Activity a,Activity b){
    return a.finish<b.finish;
}
class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        int n=start.size();
        vector<Activity> arr(n); 
        for(int i=0;i<n;i++){
            arr[i].start=start[i];
            arr[i].finish=finish[i];
        }
        sort(arr.begin(),arr.end(),compare);
        int count=1;
        int lastfinish=arr[0].finish;
        for(int i=0;i<n;i++){
            if(arr[i].start>lastfinish){
                count++;
                lastfinish=arr[i].finish;
            }
        }
        return count;
        
    }
};