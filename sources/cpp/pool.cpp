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

#include "pool.hpp"

#include <iostream>


Pool::Pool() {
    std::cout << "Pool()" << std::endl;

}

Pool::~Pool() {

}

std::string Pool::property(std::string name) {
    std::cout << "Pool.property()" << std::endl;
    return name;
}

/*
void test(void)
{
    LibZfs instance;
    instance.dataset_create("zdata/onegig", 1073741824);
}

LibZfs::LibZfs()
{
    handle = libzfs_init();
    std::cout << "Hello" << std::endl;
}

LibZfs::~LibZfs()
{
    //std::cout << handle->libzfs_fd << std::endl;
    if (handle != NULL)
    {
        libzfs_fini(handle);
    }
}

void LibZfs::dataset_create(std::string name, uint64_t size)
{
    zfs_type_t type = ZFS_TYPE_VOLUME;

    nvlist_t *props;
    nvlist_alloc(&props, NV_UNIQUE_NAME, 0);

    int ret = nvlist_add_uint64(props, zfs_prop_to_name(ZFS_PROP_VOLSIZE), size);
    std::cout << "ERRNUM:" << libzfs_error_init(ret) << std::endl;

    //zfs_create(handle, name.c_str(), ZFS_TYPE_FILESYSTEM, NULL);
    
    ret = zfs_create(handle, name.c_str(), ZFS_TYPE_VOLUME, props);
    std::cout << "ERRNUM:" << libzfs_error_init(ret) << std::endl;
}

*/
