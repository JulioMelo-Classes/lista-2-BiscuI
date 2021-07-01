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
 *@tparam BidItr iterator para o range.
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 *
 */
 /*
 ok
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    for(BidirIt i=first; i!=last && i != --last; i++){
        std::iter_swap(i, last);
    }
}

}
#endif
