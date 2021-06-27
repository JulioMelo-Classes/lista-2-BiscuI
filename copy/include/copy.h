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
 *
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param d_first o inicio do range onde os elementos devem ser copiados.
 * @return Um iterator apontado para a posição logo após o último elemento do range cópia.
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
    
    for (InputIt i = first; i != last; i++)
    {
        *d_first = *i;
        d_first++;
    }
    

    return d_first;
}

}
#endif
