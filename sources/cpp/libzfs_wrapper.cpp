#include "libzfs_wrapper.hpp"

namespace py = pybind11;

PYBIND11_MODULE(zfswrapper, lib) {
    lib.doc() = "ZFS binding module";

    lib.def("test", &test, "Test func");
};

int test(void) {
    ZFS instance = new ZFS;
}

class ZFS {
    public:
        ZFS() {
            ZFS::handle = libzfs_init();
            std::cout << "Library init" << std::endl;

        }

        ~ZFS() {
            if (ZFS::handle != NULL) {
                libzfs_fini(handle);
                std::cout << "Resouce deallocated" << std::endl;
            }
        }

    private:
        libzfs_handle_t* handle = NULL;
};