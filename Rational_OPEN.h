#pragma once
#include "Pair.h"
#pragma pack(push, 1)
class Rational : public Pair {
public:
    Rational();
    Rational(int first, int second);
    Rational(const Rational& other);
    ~Rational();

    Rational& operator=(const Rational& other);
    operator std::string() const;

    bool operator<(const Rational& other) const;
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    bool operator>=(const Rational& other) const;
    bool operator<=(const Rational& other) const;

    Rational& operator++();
    Rational operator++(int);
    Rational& operator--();
    Rational operator--(int);
};

#pragma pack(pop)