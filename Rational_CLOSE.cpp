#include "Rational_CLOSE.h"
#include <iostream>
#include <sstream>

Rational_CLOSE::Rational_CLOSE() : Pair() {}

Rational_CLOSE::Rational_CLOSE(int first, int second) : Pair(first, second) {}

Rational_CLOSE::Rational_CLOSE(const Rational_CLOSE& other) : Pair(other) {}

Rational_CLOSE::~Rational_CLOSE() {}

Rational_CLOSE& Rational_CLOSE::operator=(const Rational_CLOSE& other) {
    if (this != &other) {
        Pair::operator=(other);
    }
    return *this;
}


Rational_CLOSE::operator string() const {
    std::stringstream ss;
    ss << "Numerator = " << getFirst() << " Denominator = " << getSecond() << " ";
    return ss.str();
}

bool Rational_CLOSE::operator<(const Rational_CLOSE& other) const {
    return (getFirst() < other.getFirst()) || (getFirst() == other.getFirst() && getSecond() < other.getSecond());
}

bool Rational_CLOSE::operator==(const Rational_CLOSE& other) const {
    return getFirst() == other.getFirst() && getSecond() == other.getSecond();
}

bool Rational_CLOSE::operator!=(const Rational_CLOSE& other) const {
    return !(*this == other);
}

bool Rational_CLOSE::operator>=(const Rational_CLOSE& other) const {
    return !(*this < other);
}

bool Rational_CLOSE::operator<=(const Rational_CLOSE& other) const {
    return (*this < other) || (*this == other);
}

Rational_CLOSE& Rational_CLOSE::operator++() {
    setFirst(getFirst() + 1);
    setSecond(getSecond() + 1);
    return *this;
}

Rational_CLOSE Rational_CLOSE::operator++(int) {
    Rational_CLOSE temp(*this);
    ++(*this);
    return temp;
}

Rational_CLOSE& Rational_CLOSE::operator--() {
    setFirst(getFirst() - 1);
    setSecond(getSecond() - 1);
    return *this;
}

Rational_CLOSE Rational_CLOSE::operator--(int) {
    Rational_CLOSE temp(*this);
    --(*this);
    return temp;
}
