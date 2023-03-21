# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>


void insertionSort(std::vector<int> &seq) throw()
{
    for (size_t i = 1; i < seq.size(); ++i) {
        int value = seq[i];
        size_t hole = i;
        while (hole > 0 && seq[hole - 1] > value)
        {
            seq[hole] = seq[hole - 1];
            --hole;
        }
        seq[hole] = value;
    }
}

void    merge(std::vector<int> &seq, std::vector<int> &left, std::vector<int> &right) throw()
{
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j]) {
            seq[k] = left[i];
            ++i;
        } else {
            seq[k] = right[j];
            ++j;
        }
        ++k;
    }
    while (i < left.size())
    {
        seq[k] = left[i];
        ++i;
        ++k;
    }
    while (j < right.size())
    {
        seq[k] = right[j];
        ++j;
        ++k;
    }
}

void   mergeInsertionSortV(std::vector<int> &seq) throw()
{
    if (seq.size() <= 10)
    {
        insertionSort(seq);
        return;
    }
    size_t mid = seq.size() / 2;
    std::vector<int> left(seq.begin(), seq.begin() + mid);
    std::vector<int> right(seq.begin() + mid, seq.end());
    mergeInsertionSortV(left);
    mergeInsertionSortV(right);
    merge(seq, left, right);
}
