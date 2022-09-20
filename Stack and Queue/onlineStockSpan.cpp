class StockSpanner
{
    stack<pair<int, int>> st;
    int index;

public:
    StockSpanner()
    {
        index = -1;
    }

    int next(int price)
    {
        index += 1;

        while (!st.empty() && st.top().second <= price)
            st.pop();

        if (st.empty())
        {
            st.push({index, price});
            return index + 1;
        }

        int prevGreater = st.top().first;
        st.push({index, price});

        return index - prevGreater;
    }
};
