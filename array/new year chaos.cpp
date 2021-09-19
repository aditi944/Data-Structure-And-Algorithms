//question- https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

void minimumBribes(vector<int> q) {
int N = q.size();
    auto cnt = 0;
    for (auto i=N-1; i>=0; --i)
    {
        auto expected = i + 1;           
        if (q[i] != expected)
        {
            if (i >= 1 && expected == q[i-1])
            {
                ++cnt;
                swap(q[i], q[i-1]);
            }
            else if (i >= 2 && expected == q[i-2])
            {
                cnt += 2;
                q[i-2] = q[i-1];
                q[i-1] = q[i];
                q[i] = i;
            }
            else
            {
                cout << "Too chaotic\n";
                return;
            }
        }
    }
    cout << cnt << "\n";

}
