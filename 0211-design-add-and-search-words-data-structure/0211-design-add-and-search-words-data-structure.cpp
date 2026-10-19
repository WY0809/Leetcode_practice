struct TrieNode {
    unordered_map<char, TrieNode*> children;
    bool isEnd = false;
};

class WordDictionary {
public:
    TrieNode* root;

    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(const string& word) {
        TrieNode* curr = root;
        for(char c: word){
            if(!curr->children.count(c)){
                curr->children[c] = new TrieNode();
            }
            curr = curr->children[c];
        }
        curr->isEnd = true;
    }
    
    bool search(const string& word) {
        return dfs(word, 0, root);
    }

private:
    bool dfs(const string& word, int index, TrieNode* node) {
        if(index == word.size()){
            return node->isEnd;
        }        

        char c = word[index];
        if(c == '.'){
            for (auto& [key, child] : node->children) {
                if (dfs(word, index + 1, child))
                    return true;
            }
            return false;
        }
        
        if (!node->children.count(c))
            return false;
        
        return dfs(word, index+1, node->children[c]);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna