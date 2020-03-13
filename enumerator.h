#ifndef ENUMERATOR_H
#define ENUMERATOR_H

#include "primitiveset.h"

class Enumerator
{
public:
    Enumerator(PrimitiveSet& primitiveSet);

    std::vector<std::string> uniform_random_global_search_once(int n, int num_iters);
    std::string uniform_random_global_search_once(int n);

    int calculate_R_i(int i);
    int calculate_S_i(int i);
    std::vector<int> calculate_all_G_i_b(int i);
    int calculate_G_i_b(int i, int b);
    int calculate_l_i_b(int i, int b);
    int calculate_a_i(int i);
    std::string generate_specified_solution(int i, int r, int s, int n);
    std::string ith_n_ary_tree(int i);

private:
    int countFreq(const std::string &pat, const std::string &txt);
    int count_nodes_in_tree(const std::string& tree);
    std::vector<std::string> get_element_of_cartesian_product(std::vector<std::vector<std::string>> pools,
                                                    int repeat=1,
                                                    int index=0);
    int get_arity_of_term(int start_index, const std::string& tree);

    std::vector<int> decimal_to_base_m(int decimal, int m);
    std::vector<int> numberToBase(int n,int b);
    int base_m_to_decimal(const std::vector<int>& v, int m);
    std::vector<std::vector<int>> deinterleave(std::vector<int> num, int n);


private:
    PrimitiveSet    m_primitiveSet;
};

#endif // ENUMERATOR_H
