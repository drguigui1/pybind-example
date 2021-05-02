#include <pybind11/pybind11.h>
#include <stdio.h>

// Create a function to bind to the module
void hello() {
    printf("HELLO\n");
}

PYBIND11_MODULE (hellomodule, module)
{
    module.doc() = "hellomodule";

    module.def("hello", &hello);
}
