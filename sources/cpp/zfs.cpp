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
    std::cout << "ZFS()" << std::endl;
    handle = libzfs_init();
}

ZFS::~ZFS() {
    std::cout << "~ZFS()" << std::endl;
    if (handle != NULL) {
        libzfs_fini(handle);
    }
}

static std::vector<std::string> pool_list;

static int pool_iterate(zpool_handle_t *pool_handle, void *data) {
    //std::cout << "POOLN: " << zpool_get_name(pool_handle) << std::endl;
    pool_list.push_back(zpool_get_name(pool_handle));
}

std::vector<std::string> ZFS::pools(void) {
    pool_list.clear();
    zpool_iter(handle, pool_iterate, NULL);

    return pool_list;
}

Pool ZFS::get_pool(std::string name) {
    Pool p;
    return p;
}


/*
void ZFS::dataset_create(std::string name, uint64_t size) {

    //zfs_type_t type = ZFS_TYPE_VOLUME;

    // Initialize dataset properties
    nvlist_t *props;
    nvlist_alloc(&props, NV_UNIQUE_NAME, 0);

    nvlist_add_uint64(props, zfs_prop_to_name(ZFS_PROP_VOLSIZE), size);
    zfs_create(handle, name.c_str(), ZFS_TYPE_VOLUME, props);

    nvlist_free(props);
}

*/