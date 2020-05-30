Installation
================================================================================


Requirements
--------------------------------------------------------------------------------
pyzol library depends on:

* Python 3.6 or newer
* `pybind11 library <https://github.com/pybind/pybind11>`_


Install binary package
--------------------------------------------------------------------------------
Pre-compiled binary package available for linux x86-64:
::

    # pip install pyzol


Build from sources
--------------------------------------------------------------------------------
If you want to compile pyzol for another platform (freebsd or macosx) you should have installed:

* Package with zfs headers
* C++11 compiler


For example, Debian 10 "buster" or Ubuntu 20.04 "focal fossa":
::

    # apt-get install libzfslinux-dev build-essential
    # git clone https://github.com/IvanVSmirnov/pyzol.git
    # cd pyzol
    # python setup.py build
    # python setup.py install
