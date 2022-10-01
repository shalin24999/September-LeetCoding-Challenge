void findAns(int n) {
    vector<int> bin;
    for(int i=0;i<32;i++)  {//for loop, reverse binary stored -> T.C.-> O(1)
        int j = n>>i;
        if(j&1) bin.push_back(1);
        else bin.push_back(0)   ;
    }
    int a=0,x=a;
    for(int i=31;i>=0;i--) //find and maximise
        if(bin[i]) {
            a++; 
            if(x<a) x=a;
        }
        else a=0;
    cout<<x;
}
