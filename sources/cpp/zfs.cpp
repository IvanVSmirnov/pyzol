#include "zfs.hpp"

#include <iostream>
#include <vector>
#include <string>

ZFS::ZFS() {
    handle = libzfs_init();
}

ZFS::~ZFS() {
    if (handle != NULL) {
        libzfs_fini(handle);
    }
}

std::vector<std::string> pools(void) {
    std::vector<std::string> ret;
    ret..push_back('zdata/one');
    ret..push_back('zdata/two');
    return ret;
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