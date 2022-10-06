class node
{
public:
    pair<string, string> data;

    node(string key, string val)
    {
        this->data = {key, val};
    }
};

class TimeMap
{
    map<int, node *> mpp;
    map<int, bool> mppTime;

public:
    TimeMap() {}

    void set(string key, string value, int timestamp)
    {
        node *newNode = new node(key, value);
        mpp[timestamp] = newNode;
        mppTime[timestamp] = true;
    }

    string get(string key, int timestamp)
    {
        int time = timestamp;

        while (time)
        {
            if (mppTime.find(time) != mppTime.end())
            {
                node *curr = mpp[time];
                if (curr->data.first == key)
                {
                    return curr->data.second;
                }
            }

            time--;
        }

        return "";
    }
};
