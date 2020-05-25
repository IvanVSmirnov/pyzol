#include "libzfs_wrapper.hpp"

namespace py = pybind11;

PYBIND11_MODULE(zfswrapper, lib) {
    lib.doc() = "ZFS binding module";

    lib.def("test", &test, "Test func");
};

int test(void) {
    ZFS* instance = new ZFS;
}

class ZFS {
    public:
        ZFS(void) {
            ZFS::handle = libzfs_init();
        }

        ~ZFS(void) {
            if (ZFS::handle != NULL) {
                libzfs_fini(*handle);
                delete handle;
            }
        }

    private:
        libzfs_handle_t* handle = NULL;
};