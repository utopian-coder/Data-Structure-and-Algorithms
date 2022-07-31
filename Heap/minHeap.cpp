#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class priority_queue
{
    vector<int> pq;

    void swap(int i, int j)
    {
        int temp = pq[i];
        pq[i] = pq[j];
        pq[j] = temp;
    }

public:
    priority_queue(){};

    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int size()
    {
        return pq.size();
    }

    int getMin()
    {
        if (isEmpty())
            return INT_MIN;
        return pq[0];
    }

    void push(int x)
    {
        pq.push_back(x);
        int idx = pq.size() - 1;
        int parentIdx = (idx - 1) / 2;

        while (idx > 0 && pq[idx] < pq[parentIdx])
        {
            swap(idx, parentIdx);

            idx = parentIdx;
            parentIdx = (idx - 1) / 2;
        }
    }

    int deleteElement()
    {
        if (isEmpty())
            return INT_MIN;

        int res = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();

        int parentIdx = 0;
        int leftChild = (2 * parentIdx) + 1;
        int rightChild = (2 * parentIdx) + 2;
    }

    void print()
    {
        for (int x : pq)
            cout << x << " ";
    }
};

int main()
{
    priority_queue pq;
    pq.push(0);
    pq.push(8);
    pq.push(3);
    pq.push(6);
    pq.push(33);
    pq.push(5);

    pq.print();
}