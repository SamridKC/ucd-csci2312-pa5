//
// Created by Samrid on 5/6/2016.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include <string>

namespace CS2312 {

    template <typename T>
    class less {
    public:
        bool operator()(const T &a, const T &b) { return a < b; }
    };

    template <>
    class less <const char *> {
    public:
        bool operator()(const char *a, const char *b) {
            string __a = a;
            string __b = b;
            return __a < __b;
        }
    };

    template <>
    class less <std::string> {
    public:
        bool operator()(const std::string &a, const std::string &b) { return a < b; }
    };
}

#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
