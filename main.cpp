#include "Document.h"
#include "DocumentManager.h"
#include <iostream>

int main(){
    DocumentManager dm;
    dm.addDocument("word.txt", 1, 3);
    dm.addPatron(1);

    std::cout << dm.docs[0].active_licenses << ", " << dm.docs[0].docid << std::endl;

    dm.borrowDocument(1, 1);

    std::cout << dm.docs[0].active_licenses << ", " << dm.docs[0].docid << std::endl;

    dm.returnDocument(1, 1);

    std::cout << dm.docs[0].active_licenses << ", " << dm.docs[0].docid << std::endl;

    std::cout << dm.borrowDocument(0, 0);

    return 0;
}