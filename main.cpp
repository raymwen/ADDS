#include "Document.h"
#include "DocumentManager.h"

int main(){
    DocumentManager dm;
    dm.addDocument("word.txt", 1, 3);
    dm.addPatron(1);
    dm.borrowDocument(1, 1);


    return 0;
}