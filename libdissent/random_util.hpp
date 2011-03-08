/* libdissent/random_util.hpp
   Crypto-strong random number

   Author: Shu-Chun Weng <scweng _AT_ cs .DOT. yale *DOT* edu>
 */
/* ====================================================================
 * Dissent: Accountable Group Anonymity
 * Copyright (c) 2010 Yale University.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to
 *
 *   Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor,
 *   Boston, MA  02110-1301  USA
 */
#ifndef _DISSENT_LIBDISSENT_RANDOMUTIL_H_
#define _DISSENT_LIBDISSENT_RANDOMUTIL_H_ 1

#include <QtGlobal>

namespace Dissent{
class Random{
  private:
    Random();

  public:
    static Random* GetInstance(){
        if(_instance == 0)
            _instance = new Random();
        return _instance;
    }

    quint32 GetInt();

    // Range: [0, bound)
    quint32 GetInt(quint32 bound);

    void GetBlock(int length, char* buf);

  private:
    static Random* _instance;
};

class PRNG{
};
}
#endif  // _DISSENT_LIBDISSENT_RANDOMUTIL_H_
// -*- vim:sw=4:expandtab:cindent:
