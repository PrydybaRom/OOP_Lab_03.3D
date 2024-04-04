#pragma once
#include "Pair.h"

class Rational_CLOSE : private Pair {
public:
    Rational_CLOSE();
    Rational_CLOSE(int first, int second);
    Rational_CLOSE(const Rational_CLOSE& other);
    ~Rational_CLOSE();

    Rational_CLOSE& operator=(const Rational_CLOSE& other);
    operator string() const;

    bool operator<(const Rational_CLOSE& other) const;
    bool operator==(const Rational_CLOSE& other) const;
    bool operator!=(const Rational_CLOSE& other) const;
    bool operator>=(const Rational_CLOSE& other) const;
    bool operator<=(const Rational_CLOSE& other) const;

    Rational_CLOSE& operator++();
    Rational_CLOSE operator++(int);
    Rational_CLOSE& operator--();
    Rational_CLOSE operator--(int);
};
