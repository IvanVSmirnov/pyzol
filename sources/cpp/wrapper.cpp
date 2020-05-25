#include "wrapper.hpp"
#include "zfs.hpp"
#include "pool.hpp"
#include <iostream>

namespace py = pybind11;

PYBIND11_MODULE(pyzol, lib)
{
    lib.doc() = "ZFS binding module";
    lib.def("test", &test, "Test func");
};

void test(void)
{
    ZFS* instance = new ZFS;
    instance->dataset_create("zdata/vm109", 1073741824);
}