class MyHashSet {
public:
    vector<int>st;
    MyHashSet() {
        
    }
    
    void add(int key) {
        st.push_back(key);
    }
    
    void remove(int key) {
        for(int i =0;i<st.size();i++){
            if(st[i]==key){
                st.erase(st.begin()+i);
                // break;
            }
        }
    }
    
    bool contains(int key) {
       for(int i =0;i<st.size();i++){
        if(st[i]==key) return true;
       }
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