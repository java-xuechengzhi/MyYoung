//
// Created by Xue on 2021/6/29.
//

#include "bits/stdc++.h"
using namespace std;


int binarySearchFirstColumn(int** matrix, int matrixSize, int target) {
    int low = -1, high = matrixSize - 1;
    while(low < high) {
        int mid = (high - low + 1) / 2 + low;
        if(matrix[mid][0] <= target) {
            low = mid;
        } else {
            high = mid - 1;
        }
    }
    return low;
}

bool binarySearchRow(int* row, int rowSize, int target) {
    int low = 0, high = rowSize - 1;
    while(low <= high) {
        int mid = (high - low) / 2 + low;
        if(row[mid] == target) {
            return true;
        } else if(row[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return false;
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int rowIndex = binarySearchFirstColumn(matrix, matrixSize, target);
    if(rowIndex < 0) {
        return false;
    }
    return binarySearchRow(matrix[rowIndex], matrixColSize[rowIndex], target);
}

bool searchMatrix2(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int m = matrixSize, n = matrixColSize[0];
    int low = 0, high = m * n - 1;
    while(low <= high) {
        int mid = (high - low) / 2 + low;
        int x = matrix[mid / n][mid % n];
        if(x < target) {
            low = mid + 1;
        } else if(x > target) {
            high = mid - 1;
        } else {
            return true;
        }
    }
    return false;
}