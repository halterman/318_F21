#include <iostream>
#include <functional>
#include <vector>
#include "stopwatch.h"

bool is_ascending1(const std::vector<int>&v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] > v[j])
                return false;
    return true;
}

bool is_ascending2(const std::vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
        if (v[i] > v[i + 1])
            return false;
    return true;
}


void time_it(const std::vector<int>& v, std::function<bool(const std::vector<int>&)> f) {
    Stopwatch timer;
    timer.start();
    std::cout << f(v) << '\n';
    timer.stop();
    std::cout << timer.elapsed() << " sec elapsed" << '\n';
}


int main() {
    std::vector<int> bigvec(300000);
    for (size_t i = 0; i < bigvec.size(); i++)
        bigvec[i] = i;

    time_it(bigvec, is_ascending1);
    time_it(bigvec, is_ascending2);

    //Stopwatch timer;
    //timer.start();
    //std::cout << is_ascending1(bigvec) << '\n';
    //timer.stop();
    //std::cout << timer.elapsed() << " sec elapsed" << '\n';

    //timer.reset();
    //timer.start();
    //std::cout << is_ascending2(bigvec) << '\n';
    //timer.stop();
    //std::cout << timer.elapsed() << " sec elapsed" << '\n';
}
