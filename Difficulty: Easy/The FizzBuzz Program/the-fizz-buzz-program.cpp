void fizzBuzz(int number) {
    if(number%3==0 &&number%5==0){
        cout<<"FizzBuzz";
    }
    else if(number%3==0){
        cout<<"Fizz";
    }
    else if(number%5==0){
        cout<<"Buzz";
    }
    else{
        cout<<number;
    }
    cout<<"\n";
    
}