#include "libzfs_wrapper.hpp"

namespace py = pybind11;

PYBIND11_MODULE(zfswrapper, lib) {
    lib.doc() = "ZFS binding module";

    lib.def("zfs_init", &zfs_init, "Library initialization")
    lib.def("zfs_fini", &zfs_init, "Deallocate resources")
};

libzfs_handle_t* zfs_hdl = NULL;

void zfs_init(void) {
    zfs_hdl =  libzfs_init();
}

void zfs_fini(void* ptr) {
    libzfs_fini(zfs_hdl);
}


/*

typedef struct zfs_handle zfs_handle_t;
typedef struct zpool_handle zpool_handle_t;
typedef struct libzfs_handle libzfs_handle_t;

extern libzfs_handle_t *libzfs_init(void);
extern void libzfs_fini(libzfs_handle_t *);

extern libzfs_handle_t *zpool_get_handle(zpool_handle_t *);
extern libzfs_handle_t *zfs_get_handle(zfs_handle_t *);

*/