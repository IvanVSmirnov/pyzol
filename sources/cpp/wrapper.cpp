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
    lib.doc() = "libzfs python binding package";


    py::class_<ZFS>(lib, "ZFS")
        .def(py::init<>())
        .def("pools", &ZFS::pools)
        .def("version", &ZFS::version);
        
    
    
    py::class_<Pool>(lib, "Pool")
        .def(py::init<uint64_t>())
        .def("properties", &Pool::properties);
    
};