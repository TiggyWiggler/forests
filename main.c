#include "Forests.h"
#include "TestForests.h"

int main(void)
{
    int i;      // Loop itterator
    double padding[4] = {0.0, 0.0, 0.0, 0.0};
    //enum sortMethods methods[1] = {descendantsDesc};
    forest *f = testForest7();   // get a test forest
    layoutForest(f, NULL, 0, 1.0, 1.0, padding);

    for (i = 0; i < f->treeCount; i++)
        printTree(&(f->trees[i]));
    
    freeForest(f);
}