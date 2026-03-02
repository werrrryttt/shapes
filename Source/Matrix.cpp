#include <stddef.h>
#include <Matrix.h>

Matrix::Matrix(size_t height, size_t width) : rows_(height), cols_(width)
{
    char *log;
};


class Matrix {
    bool **array_;
    size_t cols_;
    size_t rows_;
    const static IndexError indexError_ = IndexError{"Index out of range"};
    void checkIndexes_(size_t row, size_t col) const
    {
        if (row > rows_-1 || col > cols_-1)
            throw indexError_;
    }
}
Matrix::~Matrix()   
{
    for (int i = 0; i < rows_; i++)
    {
        array_ = new bool*[height];
        for (int i = 0; i < height; i++)
        {
            array_[i] = new bool[width];
        }
    }
    delete[] array_;
}

bool Matrix::get(size_t row, size_t col);
