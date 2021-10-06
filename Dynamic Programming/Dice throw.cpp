//https://practice.geeksforgeeks.org/problems/dice-throw5349/1/?track=PG-Mathematics&batchId=457#

long long noOfWays(int M , int N , int X) {
        long long mem[N + 1][X + 1];
    memset(mem,0,sizeof mem);
    // Table entries for no dices
    // If you do not have any data, then the value must be 0, so the result is 1
    mem[0][0] = 1;
    // Iterate over dices
    for (int i = 1; i <= N; i++)
    {
        // Iterate over sum
        for (int j = i; j <= X; j++)
        {
            // The result is obtained in two ways, pin the current dice and spending 1 of the value,
            // so we have mem[i-1][j-1] remaining combinations, to find the remaining combinations we
            // would have to pin the values ??above 1 then we use mem[i][j-1] to sum all combinations
            // that pin the remaining j-1's. But there is a way, when "j-f-1> = 0" we would be adding
            // extra combinations, so we remove the combinations that only pin the extrapolated dice face and
            // subtract the extrapolated combinations.
            mem[i][j] = mem[i][j - 1] + mem[i - 1][j - 1];
            if (j - M - 1 >= 0)
                mem[i][j] -= mem[i - 1][j - M - 1];
        }
    }
    return mem[N][X]; // code here
    }
