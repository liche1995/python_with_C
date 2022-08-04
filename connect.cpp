#define PY_SSIZE_CLEAN
# include <Python.h>

static PyObject * cpp_testconnect(PyObject *self, PyObject *args){
    const char *com;
    int sts;

    if(!PyArg_ParseTuple(args, "s", &com)){
        return NULL;
    }
    sts = system(com);
    return PyLong_FromLong(sts);
}