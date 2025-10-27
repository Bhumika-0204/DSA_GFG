void utility(string s) {
    // length of string is given by s.length()
    // character at any index i is given by s[i]

    // Write your code here
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i%2==0) cout<<s[i];
    }
}