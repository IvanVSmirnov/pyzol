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


ZFS::ZFS() {
    libzfs_handle = libzfs_init();
}

ZFS::~ZFS() {
    if (libzfs_handle != NULL) {
        libzfs_fini(libzfs_handle);
    }
}

static std::vector<Pool*> pool_list;

static int pool_iterate(zpool_handle_t *pool_handle, void *data) {
    // Get pool GUID
    uint64_t guid = zpool_get_prop_int(pool_handle, ZPOOL_PROP_GUID, NULL);
    Pool* zpool = new Pool(guid);
    pool_list.push_back(zpool);    
    zpool_close(pool_handle);
    return (0);
}


std::vector<Pool*> ZFS::pools(void) {
    pool_list.clear();
    int retval = zpool_iter(libzfs_handle, pool_iterate, NULL);
    return pool_list;
}


std::string ZFS::version(void) {
	char userland[128];
	zfs_version_userland(userland, sizeof(userland));
    return std::string(userland);
}