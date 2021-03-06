/*
 * Copyright (C) 2020  Ivan Smirnov <ivsmir@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not see see <http://www.gnu.org/licenses/>
 *
 */

#ifndef _POOL_HPP_
#define	_POOL_HPP_

#include <vector>
#include <string>

#include <libzfs/libzfs.h>


#ifdef	__cplusplus
extern "C" {
#endif

class Pool {
    public:
        Pool(uint64_t guid);
        ~Pool();
        std::vector<std::string> properties(void);

    private:
        uint64_t guid;
};

#ifdef	__cplusplus
}
#endif

#endif	/* _POOL_HPP_ */
