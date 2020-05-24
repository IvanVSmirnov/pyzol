#include "libzfs_wrapper.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_zfs, m) {
    m.doc() = "ZFS binding module";
    m.def("test", &test, "Test function");
};

int test(char *message) {
    return 42;
}
