string largestTimeFromDigits(vector& arr) {
        string result;
        for(int i=0;i<=3;++i){
           for(int j=0;j<=3;++j){
                for(int k=0;k<=3;++k){
                    if(i==j or j==k or k==i)
                        continue;
                    string hh = to_string(arr[i]) + to_string(arr[j]);
                    string mm = to_string(arr[k]) + to_string(arr[6-i-j-k]);
                    
                    string temp = hh + ":" + mm;
                    
                    if(hh < "24" and mm < "60" and temp > result){
                        result = temp;
                    }
                }
            } 
        }
        
        return result;
    }
