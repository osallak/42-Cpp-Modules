#pragma once

#include<utility>
#include <string>

struct PairCompare {
    bool operator()(const std::pair<const std::string, double>& pair, const std::string& str) const {
        return pair.first < str;
    }
    bool operator()(const std::string& str, const std::pair<const std::string, double>& pair) const {
        return str < pair.first;
    }
};