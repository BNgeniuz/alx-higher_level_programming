#include <stdlib.h>
#include <stdio.h>
#include <Python.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);

/**
 * print_python_list - python basic info
 * @p: input object
 *
 */
void print_python_list(PyObject *p)
{
	int size, alloc, x;
	const char *type;

	PyListObject *list = (PyListObject *)p:
	PyVarObject *var = (PyListObject *)p:

	size = var->obj_size;
	alloc = list->allocated;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %do\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (x = 0; x < size; x++)
	{
		type = list->obj_item[x] ->obj_type->tp_name;
		printf("Element %d: %s\n", x, type);
		if (strcmp(type, "bytes") == 0)
			print_python_bytes(list ->obj_item[x]);
	}
}


/**
 * print_python_bytes - python byte basic info
 * @p: input bytes
 *
 */
void print_python_bytes(PyObject *p)
{
	unsigned char x, size;
	PyBytesObject *bytes = (PyByteObject *)p;

	printf("[*.] bytes object info\n");
	if (strcmp(p->obj_type->tp_name, "bytes") != 0)
	{
		printf(" [Error] Invalid Bytes Object\n");
		return;
	}

	printf(" size: %ld\n", ((PyVarObject *)p)->obj_size);
	printf(" trying string: %s\n", bytes->obj_sval);

	if (((PyVarObject *)p)->obj_size > 10)
		size = 10;
	else
		size = ((PyVarObject *)p)->obj_size + 1;

	printf(" first %d bytes: ", size);
	for (x = 0; x < size; x++)
	{
		printf("%02hhx", bytes->obj_sval[x]);
		if (x == (size - 1))
			printf("\n");
	}
}
