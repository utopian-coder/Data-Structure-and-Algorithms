class LRUCache
{
    class node
    {
    public:
        int key;
        int value;
        node *next;
        node *prev;

        node(int key, int value)
        {
            this->key = key;
            this->value = value;
            next = nullptr;
            prev = nullptr;
        }
    };

    void addNode(node *newNode)
    {
        node *temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }

    void deleteNode(node *delNode)
    {
        node *delPrev = delNode->prev;
        node *delNext = delNode->next;
        delPrev->next = delNext;
        delNext->prev = delPrev;
    }

    node *head = new node(-1, -1);
    node *tail = new node(-1, -1);

    int cap;
    unordered_map<int, node *> mpp;

public:
    LRUCache(int capacity)
    {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key)
    {
        if (mpp.find(key) != mpp.end())
        {
            node *targetNode = mpp[key];
            int res = targetNode->value;
            deleteNode(targetNode);
            addNode(targetNode);

            mpp.erase(key);
            mpp[key] = head->next;

            return res;
        }

        return -1;
    }

    void put(int key, int value)
    {
        if (mpp.find(key) != mpp.end())
        {
            node *currNode = mpp[key];
            currNode->value = value;
            deleteNode(currNode);
            addNode(currNode);
            mpp[key] = head->next;

            return;
        }

        if (mpp.size() == cap)
        {
            mpp.erase(tail->prev->key);
            deleteNode(tail->prev);
            addNode(new node(key, value));
            mpp[key] = head->next;
        }
        else
        {
            node *newNode = new node(key, value);
            addNode(newNode);
            mpp[key] = head->next;
        }
    }
};