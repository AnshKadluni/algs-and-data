#include "DocumentManager.h"


int main(void) {

    DocumentManager D;

    D.addDocument("Book", 123, 2);

    D.addPatron(1);
    D.borrowDocument(123, 1);


    D.returnDocument(123, 1);

    cout << D.documents[123].second << endl;

    return 0;
}