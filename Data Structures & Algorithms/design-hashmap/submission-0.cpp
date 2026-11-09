class MyHashMap {
public:
    struct listnode{
        int key;
        int value;
        listnode* next;
        listnode(int key, int value):key(key),value(value),next(nullptr){}
    };

    vector<listnode*> map;

    int hash(int key){
        return key % map.size();
    }

    MyHashMap(): map(10000, nullptr) {

        for(auto& bucket:map){
            bucket = new listnode(-1, 0);
        }
    }
    
    void put(int key, int value) {
        listnode* cur = map[hash(key)];
        while(cur->next){
            if(cur->next->key == key){
                cur->next->value = value;
                return;
            }
            cur = cur->next;
        }
        cur->next = new listnode(key, value);   
    } 
    
    int get(int key) {
        listnode* cur = map[hash(key)];
        while(cur->next){
            if(cur->next->key == key){
                return cur->next->value;
            }
            cur = cur->next;
        }
        return -1;
    }
    
    void remove(int key) {
        listnode* cur = map[hash(key)];
        while(cur->next){
            if(cur->next->key == key){
                listnode* temp = cur->next;
                cur->next = temp->next;
                delete temp;
                return;
            }
            cur = cur->next;
        }
        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */