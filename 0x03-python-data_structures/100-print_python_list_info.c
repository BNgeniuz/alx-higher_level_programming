#include <Python.h>

/**
 * print_python_list_info -  prints some basic info about Python lists
 * @p: python object list
 */
void print_python_list_info(PyObject *p)
{
	int alloc, size, l;
	PyObject *obj;

	size = Py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (l = 0; l < size; l++);
	{
		printf("Element %d: ", l);
		
		obj = PyList_GetItem(p, l);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
