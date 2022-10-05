const int SZ = 26;
struct Trie {
    struct TrieNode {
        TrieNode* children[SZ];
        int cnt;
 
        TrieNode() {
            for(int i = 0; i < SZ; i++)
            {
                children[i] = nullptr;
            }
            cnt = 0;
        }
    };
 
    TrieNode* root = new TrieNode(); // ""
 
    void insert(const string& word)
    {
        TrieNode* cur = root;
        for(int i = 0; i < word.size(); i++)
        {
            int idx = word[i] - 'a';
            cur->cnt++;
            if(!cur->children[idx])
            {
                cur->children[idx] = new TrieNode();
            }
            cur = cur->children[idx];
        }
        cur->cnt++;
    }
 
    int get_ans(const string& word)
    {
        TrieNode* cur = root;
        for(int i = 0; i < word.size(); i++)
        {
            int idx = word[i] - 'a';
            if(!cur->children[idx]) return 0;
            cur = cur->children[idx];
        }
        return cur->cnt;
    }
 
    bool is_empty(TrieNode* cur)
    {
        if(!cur) return true;
        for(int i = 0; i < SZ; i++)
        {
            if(cur->children[i]) return false;
        }
        return true;
    }
 
    void remove(const string& word)
    {
        remove(root, word);
    }
 
    // void remove(TrieNode* cur, const string& word)
    // {
    //     for(int i = 0; i < word.size(); i++)
    //     {
    //         cur->cnt--;
    //         int idx = word[i] - 'a';
    //         cur = cur->children[idx];
    //     }
    //     cur->cnt--;
    // }
    TrieNode* remove(TrieNode* cur, const string& word, int idx = 0)
    {
        cur->cnt--;
        if(idx == word.size())
        {
            if(cur->cnt == 0)
            {
                delete cur;
                cur = nullptr;
            }
            return cur;
        }
 
        int key = word[idx] - 'a';
        cur->children[key] = remove(cur->children[key], word, idx+1);
 
        if(is_empty(cur) && cur->cnt == 0)
        {
            delete cur;
            cur = nullptr;
        }
        return cur;
    }
};