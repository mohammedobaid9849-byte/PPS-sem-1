/**
 * Return an array of arrays.
 * The sizes of the rows are returned in *returnColumnSizes.
 * The number of rows is returned in *returnSize.
 */
int** matrixReshape(int** mat, int matSize, int* matColSize,
                    int r, int c, int* returnSize,
                    int** returnColumnSizes) {

    int m = matSize;
    int n = matColSize[0];

    // Check whether reshaping is possible
    if (m * n != r * c) {
        *returnSize = m;
        *returnColumnSizes = (int*)malloc(m * sizeof(int));

        for (int i = 0; i < m; i++) {
            (*returnColumnSizes)[i] = n;
        }

        return mat;
    }

    // Allocate memory for reshaped matrix
    int** result = (int**)malloc(r * sizeof(int*));

    *returnColumnSizes = (int*)malloc(r * sizeof(int));

    int row = 0, col = 0;

    for (int i = 0; i < r; i++) {
        result[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;

        for (int j = 0; j < c; j++) {
            result[i][j] = mat[row][col];

            col++;

            if (col == n) {
                col = 0;
                row++;
            }
        }
    }

    *returnSize = r;

    return result;
}