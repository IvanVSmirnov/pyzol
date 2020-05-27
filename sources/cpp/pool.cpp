#include "pool.hpp"

#include <iostream>


Pool::Pool() {
    std::cout << "Pool()" << std::endl;

}

Pool::~Pool() {

}

std::string Pool::property(std::string name) {
        std::cout << "~Pool()" << std::endl;
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
