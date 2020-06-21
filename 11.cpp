class Solution {
public:
    int find_min(int a,int b)
    {
        if(a<b)
            return a;
        else
            return b;
    }
    int maxArea(vector<int>& height) {
        auto s=height.begin(),p=height.end()-1;
        int distance=height.size()-1,area=0,min;
        while(s!=p+1)
        {
            min=find_min(*s,*p);
            cout<<"min-"<<min<<endl;
            if(area<min*distance)
                area=min*distance;
            if(*s<*p)
                s++;
                else
                    p--;
            distance--;
            cout<<area<<endl;
            
        }
        return area;
        
    }
};