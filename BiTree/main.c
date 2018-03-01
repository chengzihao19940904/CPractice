#include <stdio.h>
#include "BiTree.h"
int main() {
    BiTree tree;
    initTree(&tree);
    createBiTree(&tree);
    preOrderVisit(tree);
    return 0;
}