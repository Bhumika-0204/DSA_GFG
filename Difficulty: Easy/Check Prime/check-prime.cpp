// User function Template for C++

bool prime(int n) {

    // Write your code here
    if(n==1) {
        return false;
    }    
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) count++;
    }
    if(count==2) return true;
    else return false;
    // returns a boolean value
}