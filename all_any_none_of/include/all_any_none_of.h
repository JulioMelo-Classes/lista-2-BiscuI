#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

 /*!
 * 
 *@tparam InputIt iterator para o range.
 *@tparam UnaryPredicate Predicado para a verificação
 *
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param cmp uma função que retorna true se o elemento é menor do que o segundo, ou falso caso contrário.
 * @param p uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário.
 * 
 * @return  retorna verdadeiro se todos os elementos do range satisfazem p, falso caso contrário
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    bool verificador = false;
    while(first!=last){
        if(!p(*first)){
            return verificador;
        }
        if(first==last-1){
            verificador = true;
        }
        first++;
    }
    return verificador;
}

/*!
 * 
 *@tparam InputIt iterator para o range.
 *@tparam UnaryPredicate Predicado para a verificação
 *
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param cmp uma função que retorna true se o elemento é menor do que o segundo, ou falso caso contrário.
 * @param p uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário.
 * 
 * @return  retorna verdadeiro se ao menos um elemento do range satisfaz p, falso caso contrário
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    bool verificador = false;
    while(first!=last){
        if(p(*first)){
            verificador = true;
            return verificador;
        }
        first++;
    }
    return verificador;
}

/*!
 * 
 *@tparam InputIt iterator para o range.
 *@tparam UnaryPredicate Predicado para a verificação
 *
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param cmp uma função que retorna true se o elemento é menor do que o segundo, ou falso caso contrário.
 * @param p uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário.
 * 
 * @return  retorna verdadeiro se todos os elementos do range não satisfazem p, falso caso contrário
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    bool verificador = true;
    while(first!=last){
        if(p(*first)){
            verificador = false;
            return verificador;
        }
        first++;
    }
    return verificador;
}

}
#endif
