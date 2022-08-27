class node
{
public:
    node *next;
    node *prev;
    int key;
    int value;
    int freq;
    node(int key, int value)
    {
        this->key = key;
        this->value = value;
        next = nullptr;
        prev = nullptr;
        freq = 1;
    }
};

class List
{
public:
    node *head;
    node *tail;
    int size = 0;

    List()
    {
        head = new node(-1, -1);
        tail = new node(-1, -1);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }

    void addNodeInFront(node *newNode)
    {
        node *temp = head->next;
        head->next = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        newNode->prev = head;
        size++;
    }

    void deleteNode(node *delNode)
    {

        node *delPrev = delNode->prev;
        node *delNext = delNode->next;
        delPrev->next = delNode->next;
        delNext->prev = delNode->prev;
        size--;
    }
};

class LFUCache
{
    unordered_map<int, node *> keyNode;
    unordered_map<int, List *> freqList;
    int minFreq;
    int cacheCapacity;
    int currSize;

public:
    LFUCache(int capacity)
    {
        cacheCapacity = capacity;
        minFreq = 0;
        currSize = 0;
    }

    void updateFreqList(node *x)
    {
        keyNode.erase(x->key);
        freqList[x->freq]->deleteNode(x);

        if (minFreq == x->freq && freqList[x->freq]->size == 0)
            minFreq++;

        List *higherFreqList = new List();

        if (freqList.find(x->freq + 1) != freqList.end())
            higherFreqList = freqList[x->freq + 1];

        x->freq += 1;
        higherFreqList->addNodeInFront(x);
        freqList[x->freq] = higherFreqList;
        keyNode[x->key] = x;
    }

    int get(int key)
    {
        if (keyNode.find(key) != keyNode.end())
        {
            node *res = keyNode[key];
            int val = res->value;
            updateFreqList(res);
            return val;
        }

        return -1;
    }

    void put(int key, int value)
    {
        if (cacheCapacity == 0)
            return;

        if (keyNode.find(key) != keyNode.end())
        {
            node *targetNode = keyNode[key];
            targetNode->value = value;
            updateFreqList(targetNode);
        }
        else
        {
            if (currSize == cacheCapacity)
            {
                List *list = freqList[minFreq];
                keyNode.erase(list->tail->prev->key);
                list->deleteNode(list->tail->prev);
                currSize--;
            }

            minFreq = 1;
            currSize++;

            List *newFreqList = new List();

            if (freqList.find(minFreq) != freqList.end())
            {
                newFreqList = freqList[minFreq];
            }

            node *newNode = new node(key, value);
            keyNode[key] = newNode;
            newFreqList->addNodeInFront(newNode);
            freqList[minFreq] = newFreqList;
        }
    }
};