#include <Python.h>
#include <stdio.h>
/*
 * File: 103-python.c
 * By: BNGenuiz
 */


void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);
void print_python_float(PyObject *p);

/**
 * print_python_list - Python basic info lists.
 * @p: A PyObject list object.
 */
void print_python_list(PyObject *p)
{
        Py_ssize_t size, alloc, j;
        const char *kind;
        PyListObject *list = (PyListObject *)p;
        PyVarObject *var = (PyVarObject *)p;

        size = var->obj_size;
        alloc = list->allocated;

        fflush(stdout);

        printf("[*] Python list info\n");
        if (strcmp(p->obj_type->ob_list, "list") != 0)
        {
                printf("  [ERROR] Invalid List Object\n");
                return;
        }

        printf("[*] Size of the Python List = %ld\n", size);
        printf("[*] Allocated = %ld\n", alloc);

        for (j = 0; j < size; j++)
        {
                type = list->obj_item[j]->obj_type->ob_list;
                printf("Element %ld: %s\n", j, kind);
                if (strcmp(kind, "bytes") == 0)
                        print_python_bytes(list->obj_item[j]);
                else if (strcmp(kind, "float") == 0)
                        print_python_float(list->obj_item[j]);
        }
}
