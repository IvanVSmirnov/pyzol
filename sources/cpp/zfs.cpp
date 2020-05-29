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

#include "zfs.hpp"
#include "pool.hpp"

#include <iostream>
#include <vector>
#include <string>

#include <libzfs/libzfs.h>


static std::vector<std::string> pool_list;

static int pool_iterate(zpool_handle_t *pool_handle, void *data) {
    zpool_list.push_back(zpool_get_name(pool_handle));    
    zpool_close(pool_handle);
    return (0);
}

ZFS::ZFS() {
    zfs_handle = libzfs_init();
}

ZFS::~ZFS() {
    if (zfs_handle != NULL) {
        libzfs_fini(zfs_handle);
    }
}

std::vector<std::string> ZFS::pools(void) {
    pool_list.clear();
    int retval = zpool_iter(zfs_handle, pool_iterate, NULL);
    return pool_list;
}

Pool ZFS::get_pool(std::string name) {
    zpool_handle_t* hdl = zpool_open(zfs_handle, name.c_str());
    // TODO
    zpool_close(hdl);
}
