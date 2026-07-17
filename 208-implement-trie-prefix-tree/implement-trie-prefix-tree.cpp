struct Node{
    Node * leaf[26];
    bool flag ;
    Node()
    {
        flag = false;
        for (int i = 0; i < 26; i++)
        {
            leaf[i] = NULL;   
        }
    }
    bool ContainKey(char ch)
    {
        if(leaf[ch - 'a']!=NULL) return true;
        return false;
    }
    void put(Node * root , char ch)
    {
        leaf[ch - 'a']=root;
    }
    Node * get(char ch)
    {
        return leaf[ch - 'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }

};

class Trie {
private: Node * root;
public:
    
    Trie() {
       root = new Node();
        
    }
    
    void insert(string word) {
        Node * node = root;
        for ( int  i =0 ;i< word.size() ;i++)
        {
            if(!node ->ContainKey(word[i]))
            {
                node ->put(new Node() , word[i]);
            }
        
        node = node -> get(word[i]);
        }
        node -> setEnd();
        
    }
    
    bool search(string word) {
        Node * node =root;
        for(int i =0 ;i<word.size(); i++)
        {
            if(!node ->ContainKey(word[i]))
            {
                return false;
            }
            node = node->get(word[i]);
        }
         return (node ->isEnd() == true);
        
    }
    
    bool startsWith(string prefix) {
          Node * node =root;
        for(int i =0 ;i<prefix.size(); i++)
        {
            if(!node ->ContainKey(prefix[i]))
            {
                return false;
            }
            node =  node ->get(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */