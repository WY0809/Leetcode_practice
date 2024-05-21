class MyHashMap {
public:
map<int, int> Map;
    MyHashMap() {
    }
    
    void put(int key, int value) {
        Map[key] = value;
    }
    
    int get(int key) {
        if(Map[key]){
            return Map[key];
        }
        return -1;
    }
    
    void remove(int key) {
        Map.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */