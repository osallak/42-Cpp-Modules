# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>


static void insertionSort(std::deque<int> &seq) throw()
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

static void    merge(std::deque<int> &seq, std::deque<int> &left, std::deque<int> &right) throw()
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

void   mergeInsertionSortQ(std::deque<int> &seq) throw()
{
    if (seq.size() <= 10)
    {
        insertionSort(seq);
        return;
    }
    size_t mid = seq.size() / 2;
    std::deque<int> left(seq.begin(), seq.begin() + mid);
    std::deque<int> right(seq.begin() + mid, seq.end());
    mergeInsertionSortQ(left);
    mergeInsertionSortQ(right);
    merge(seq, left, right);
}
