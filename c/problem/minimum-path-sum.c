#include <stdio.h>
#include <math.h>

/**
 * 最小路径和
 * @param grid
 * @param gridSize
 * @param gridColSize
 * @return
 */
int minPathSum(int grid[][3], int gridSize, int *gridColSize) {
    int rows = gridSize, columns = gridColSize[0];
    if (rows == 0 || columns == 0) {
        return 0;
    }
    int dp[rows][columns];
    dp[0][0] = grid[0][0];
    for (int i = 1; i < rows; i++) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    for (int j = 1; j < columns; j++) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < columns; j++) {
            dp[i][j] = fmin(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }
    return dp[rows - 1][columns - 1];
}

int main() {
    int array[3][3] = {
            {1, 3, 1},
            {1, 5, 1},
            {4, 2, 1}
    };
    int gridColSize[] = {3, 3, 3};
    printf("%d", minPathSum(array, 3, gridColSize));
    return 0;
}