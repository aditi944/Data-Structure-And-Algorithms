// C++ program to illustrate Saddle point which is the point which is min in its row but max in its column
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

// Function to find saddle point
bool findSaddlePoint(int mat[MAX][MAX], int n)
{
	// Process all rows one by one
	for (int i = 0; i < n; i++)
	{
		// Find the minimum element of row i.
		// Also find column index of the minimum element
		int min_row = mat[i][0], col_ind = 0;
		for (int j = 1; j < n; j++)
		{
			if (min_row > mat[i][j])
			{
				min_row = mat[i][j];
				col_ind = j;
			}
		}

		// Check if the minimum element of row is also
		// the maximum element of column or not
		int k;
		for (k = 0; k < n; k++)

			// Note that col_ind is fixed
			if (min_row < mat[k][col_ind])
				break;

		// If saddle point is present in this row then
		// print it
		if (k == n)
		{
		cout << "Value of Saddle Point " << min_row;
		return true;
		}
	}

	// If Saddle Point not found
	return false;
}

// Driver code
int main()
{
	int mat[MAX][MAX] = {{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}};
	int n = 3;
	if (findSaddlePoint(mat, n) == false)
	cout << "No Saddle Point ";
	return 0;
}
