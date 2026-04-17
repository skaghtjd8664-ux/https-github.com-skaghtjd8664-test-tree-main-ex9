#include <stdio.h>
#include <stdlib.h>

#include "arrayList.h"

int main() {
	arrayList* myArrayList;
	myArrayList = createArrayList(2);

	if (sizeArrayList(myArrayList) == 0) {
		printf("Create ok\n");
	}

	// Insert test
	insertArrayList(myArrayList, 0, 10);
	insertArrayList(myArrayList, 1, 20); //Full상태

	insertArrayList(myArrayList, 2, 30);
	insertArrayList(myArrayList, 3, 40);

	printArrayList(myArrayList);
}