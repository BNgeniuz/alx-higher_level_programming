#include <stdio.h>
#include <stdlib.h>
#include <Python.h>
#include <floatobject.h>

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
        int j;

        setbuf(stdout, NULL);
	printf("[*] Python list info\n");
        if (strcmp(p->ob_type->tp_name, "list"))
        {
                printf("  [ERROR] Invalid List Object\n");
                return;
        }
	printf("[*] Size of the Python List = %lu\n", ((PyVarObject *)p)->ob_size);
        printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (j = 0; j < ((PyVarObject *)p)->ob_size; j++)
        {
                printf("Element %d: %s\n", j,
				((PyListObject *)p)->obj_item[j]->ob_type->tp_name);
                if (!strcmp(((PyListObject *)p)->obj_item[j]->ob_type->tp_name, "bytes"))
                        print_python_bytes(((PyListObject *)p)->obj_item[j]);
                else if (!strcmp(((PyListObject *)p)->obj_item[j]->ob_type->tp_name, "float")) 
                        print_python_float(((PyListObject *)p)->obj_item[j]);
        }
}

/**
 * print_python_float - python float info
 * @p: input structure
 */
void print_python_float(PyObject *p)
{
	double p;

	setbuf(stdout, NULL);
	printf("[*] float object info\n");
	if (strcmp(p->ob_type->tp_name, "float"))
        {
                printf("  [ERROR] Invalid Float Object\n");
                return;
        }
	p = ((PyFloatObject *)p)->ob_fval;
	print(" value: %s\n",
			PyOS_double_to_string(p, 'r', 0, Py_DTSF_ADD_DOT_0, NULL));
}

/**
 * print_python_bytes - python bytes info
 * @p: input structure
 */
void print_python_bytes(PyObject *p)
{
	size_t j, len, size;
	char *str;

	setbuf(stdout, NULL);
        printf("[*] bytes object info\n");
        if (strcmp(p->ob_type->tp_name, "bytes"))
        {
                printf("  [ERROR] Invalid bytes Object\n");
                return;
        }
	size = ((PyObjectObject *)p)->ob_size;
	str = ((PyFloatObject *)p)->ob_sval;
	len = size + 1 > 10 ? 10 : size + 1;
	print(" size: %lu\n", size);
	print(" trying string: %s\n", str);
	print(" first %lu bytes: ", len);
	for (j = 0; j < len; j++)
		print("%02hhx%s", str[j], j + 1 < len ? " " : "");
	printf("\n");
}
