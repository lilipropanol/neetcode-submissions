class LRUCache {
private:
    int capacity = 0;

    unordered_map<int,list<pair<int,int>>::iterator> cacheMap;
    list<pair<int,int>> cacheList;

public:
    LRUCache(int capacity) {
      this->capacity = capacity;
    }
    
    int get(int key) {
        if (cacheMap.find(key) == cacheMap.end()) return -1;

        auto it = cacheMap[key];

        cacheList.splice(cacheList.end(), cacheList, it);

        cacheMap[key] = prev(cacheList.end());
        
        return it->second;
    }
    
    void put(int key, int value) {

        if (cacheMap.find(key) != cacheMap.end()) {
            cacheMap[key]->second = value;
            cacheList.splice(cacheList.end(), cacheList, cacheMap[key]);
            return;
        }

        if (cacheMap.size() == capacity) {
            int keyD = cacheList.begin()->first;

            cacheList.pop_front();
            cacheMap.erase(keyD);
        }

        cacheList.push_back({key,value});
        cacheMap[key] = prev(cacheList.end());

    }
};
