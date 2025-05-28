#include "DocumentManager.h"


int main(void) {

    DocumentManager D;

    D.addDocument("Book", 123, 2);
    D.addPatron(1);
    D.borrowDocument(123, 1);

    return 0;
}