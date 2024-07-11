#include "Utils.hpp"
#define vi vector<int>
class Formula{
    public:
        set<vi>clauses;              // set of clauses
        vi literals;                   // truth value of literals, 1 for pos, 0 for neg, -1 for not assigned
        vi freq;                       // frequency of signed literal
        vi freq_lit;                   // frequency of unsigned literal

        Formula(){
                                                // default constructor
        }
        Formula(Formula & formula){             // copy parameterised constructor
            clauses=formula.clauses;
            literals=formula.literals;
            freq=formula.freq;
            freq_lit=formula.freq_lit;
        }
};