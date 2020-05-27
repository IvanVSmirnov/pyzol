#include "wrapper.hpp"
#include "zfs.hpp"
#include "pool.hpp"

#include <iostream>
#include <vector>
#include <string>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(pyzol, lib) {
    lib.doc() = "ZFS binding module";

    py::class_<ZFS>(lib, "ZFS")
        .def(py::init<>())
        .def("pools", &ZFS::pools)
        .def("get_pool", &ZFS::get_pool);

    
    py::class_<Pool>(lib, "Pool")
        .def(py::init<>())
        .def("property", &Pool::property);
    
};


/*
std::vector<std::string> test(void)
{
    //ZFS* instance = new ZFS;
    //instance->dataset_create("zdata/vm109", 1073741824);
    //return instance->pools();
}
*/