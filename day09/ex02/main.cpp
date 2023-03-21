# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <ctime>
# include "utils.hpp"

std::vector<int> parseSequence(char **av, int ac, std::clock_t *start)
{
    std::vector<int> seq;

    for (int i = 1; i < ac; ++i)
    {
        for (size_t j = 0; j < strlen(av[i]); ++j)
        {
            if (!isdigit(av[i][j]) && ((av[i][j] == '-' || av[i][j] == '+') && j != 0)) {
                throw std::invalid_argument("Invalid sequence");
            }
        }
        try {
            seq.push_back(std::stoi(av[i]));
        } catch (std::out_of_range &e) {
            throw std::invalid_argument("Invalid sequence");
        }
    }
    *start = std::clock();
    return seq;
}

bool isSorted(std::vector<int> const& seq)
{
    //check if the sequence is already sorted
    for (size_t i = 0; i < seq.size() - 1; ++i)
    {
        if (seq[i] > seq[i + 1])
            return false;
    }
    return true;
}

int main(int ac, char **av) throw()
{
    if (ac == 1) {
        std::cout << "Usage: ./PmergeMe 'sequence of numbers to sort'" << std::endl;
        return 1;
    }

    std::vector<int> seqV;

    double    vec;
    double    deq;

    std::clock_t start;
    std::clock_t end;

    try {
        seqV = parseSequence(av, ac, &start);
        end = std::clock();

        //calculate the time it took to parse the sequence in microseconds
        vec = (end - start) / (double)CLOCKS_PER_SEC * 1000000.0;
        if (isSorted(seqV)){
            std::cout << "Error: sequence is already sorted" << std::endl;
            return 1;
        }

        std::cout << "Before: ";
        for (size_t i = 0; i < seqV.size(); ++i) {
            std::cout << seqV[i] << " ";
        }
        std::cout << std::endl;

        start = std::clock();
        mergeInsertionSortV(seqV);
        end = std::clock();

        vec += (end - start) / (double)CLOCKS_PER_SEC * 1000000.0;

        std::cout << "After: ";
        for (size_t i = 0; i < seqV.size(); ++i) {
            std::cout << seqV[i] << " ";
        }
        std::cout << std::endl;

        start = std::clock();
        std::deque<int> seqQ(seqV.begin(), seqV.end());
        mergeInsertionSortQ(seqQ);
        end = std::clock();

        deq = (end - start) / (double)CLOCKS_PER_SEC * 1000000.0;
    
        std::cout << "Time to process range of " << seqV.size() << " elements with std::vector : " << vec << " us" << std::endl;
        std::cout << "Time to process range of " << seqQ.size() << " elements with std::deque : " << deq << " us" << std::endl;
    } catch (std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
        return 1;
    } 

}