class SmallestInfiniteSet {
    set<int>st;
    int first_num;
public:
    SmallestInfiniteSet() {
        first_num = 1;
    }
    
    int popSmallest() {
        
        int ans;
        
        if(!st.empty())
        {
          ans = *st.begin();
          st.erase(st.begin());
        }
        else
        {
            ans = first_num;
            first_num+=1;
        }
        return ans;
    }
    
    void addBack(int num) {
        if(first_num <=num || st.count(num))
            return;
        
        st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */