# Strlist - C library

## Functions

* **strlst_clear**: *Clear an string list, freeing all nodes and their content*;
* **strlst_getindex**: *Return the index of a node in a string list*;
* **strlst_getnode**: *Return a node at an specified position (index) of an string list*;
* **strlst_init**: *Initialize a list of strings (t_strlist) with null pointers and size value as zero*;
* **strlst_pop_back**: *Remove a node at the end (back) from an string list, and set it's next and prev values to NULL*;
* **strlst_pop_front**: *Remove a node at the begin (front) from an string list, and set it's next and prev values to NULL*;
* **strlst_pop_node**: *Remove the specified node from an string list, and set it's next and prev values to NULL*.
* **strlst_pop**: *Remove a node at an specified position (index) from an string list, and set it's next and prev values to NULL*.
* **strlst_print**: *Print a string (fd 1) list following this format*
	* *filled -> [string1, string2, ..., string_n]*
	* *empty -> []*;
* **strlst_push_back**: *Insert a node at the end (back) of an string list*;
* **strlst_push_front**: *Insert a node at the begin (front) of an string list*;
* **strlst_push**: *Insert a node at an specified position (index) of an string list*;
* **strlst_swap_node**: *Swap two nodes, specified by index*;
* **strnode_free**: *Free a node*;
* **strnode_new**: *Allocate a new string node (t_strnode) with null pointers and argument content*.
