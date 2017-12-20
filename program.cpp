#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

unsigned program(unsigned a, unsigned x) {
    unsigned w, m;
    unsigned i;
    w = 1;
    i = 30;
    m = static_cast<unsigned int>(1 << i);
    auto rpow = [](unsigned a, unsigned b) { return round(pow(a, b)); };
    auto weqrpowa = [&](int b) { return w == rpow(a, b); };
    auto niezmiennik = [&]() { return weqrpowa(x >> (i + 1)); };
    auto posm = [&]() { return m > 0; };
    assert(niezmiennik());
    auto sq = [](unsigned a) { return a * a; };
    auto eqmul = [](int a, int b, int w) {
        return a * w == b * w;
    };
    auto tozmmem = [&]() {
        return eqmul(m >> 1, 1 << (i - 1), m >> 1);
    };
    assert(tozmmem());
    while (m > 0) {
        assert(niezmiennik() && posm());
        assert(tozmmem());
        w *= w;
        //assert(weqrpowa(x >> i) && posm());
        assert(tozmmem());
        if (x & m) w *= a;
        //assert(weqrpowa(x >> i + 1) && posm());
        assert(tozmmem());
        m >>= 1;
        i--;
        assert(niezmiennik());
        assert(tozmmem());
    }
    assert(tozmmem());
    return w;
}