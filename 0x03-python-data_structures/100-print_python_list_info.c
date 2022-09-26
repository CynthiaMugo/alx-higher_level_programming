#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info -> prints some basic info abt python list
 * @p: python object
 */

void print_python_list_info(PyObject *p);
{
	long int size = Pylist_Size(p);
	int i;
	PylistObject *obj = (PylistObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (i = 0; i < size; i++)
		printf("Element %i: %s\n", i, Py_Type(obj->ob_item[i])->tp_name);
}
