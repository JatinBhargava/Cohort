class MyHashSet {
public:
        vector<int>hs;
        int siz;
    MyHashSet() {
        siz = 1e6+1;
        hs.resize(siz);
    }
    
    void add(int key) {
        hs[key] = 1;
    }
    
    void remove(int key) {
        hs[key] = 0;
    }
    
    bool contains(int key) {
        if(hs[key] == 1) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */