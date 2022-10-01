#include <iostream>

using namespace std;

int main()
{
    stack<int> st;
    vector<int> res;
    
	// for left  for(int i = 0; i < nums.size(); ++i)	
    for(int i = nums.size() - 1; i >= 0; --i)	
    {
        if(st.empty())
            res.push_back(-1);
        else if(st.top() > nums[i])
            res.push_back(st.top());
        else
        {
            while(!st.empty() && st.top() <= nums[i])
                st.pop();
            
            if(st.empty())
                res.push_back(-1);
            else
                res.push_back(st.top());
        }
        
        st.push(nums[i]);
    }

    return 0;
}
