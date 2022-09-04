int Solution::solve(vector<int> &A, int B)
{
    int currXor = 0, count = 0;
    unordered_map<int, int> freq;

    for (int i = 0, n = A.size(); i < n; i++)
    {
        currXor = currXor ^ A[i];

        if (currXor == B)
            count++;

        int toFind = currXor ^ B;
        if (freq.find(toFind) != freq.end())
            count += freq[toFind];

        freq[currXor]++;
    }

    return count;
}
