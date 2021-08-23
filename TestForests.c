#include "TestForests.h"

forest *testForest1(void)
{
    /* Creates a simple tree of test data. */
    /* Simple Tree
             ----0----
             |       |
           --1--     2
           |   |      
           3   4        */

    /* create the forest */
    forest *forest = malloc(sizeof(struct forest));
    if (!forest)
        return NULL;
    forest->treeCount = 0;

    /* create the tree */
    tree tree1 = createTree();

    /* Create the nodes */
    node node0, node1, node2, node3, node4;
    node0 = createNode(0);
    node1 = createNode(1);
    node2 = createNode(2);
    node3 = createNode(3);
    node4 = createNode(4);

    /* Add the nodes to the tree */
    tree1.nodes = addNode(tree1.nodes, node0);
    tree1.nodes = addNode(tree1.nodes, node1);
    tree1.nodes = addNode(tree1.nodes, node2);
    tree1.nodes = addNode(tree1.nodes, node3);
    tree1.nodes = addNode(tree1.nodes, node4);

    /* link the nodes */
    tree1.links = linkNodes(tree1.links, node0.id, node1.id);
    tree1.links = linkNodes(tree1.links, node0.id, node2.id);
    tree1.links = linkNodes(tree1.links, node1.id, node3.id);
    tree1.links = linkNodes(tree1.links, node1.id, node4.id);

    /* Manually set the root node */
    tree1.nodes->nodes[0].level = 0;

    /* add tree to the forest */
    forest = addTree(forest, tree1);

    return forest;
}

forest *testForest2(void)
{
    /* Medium Tree
       ----------0----------
       |    |    |    |    |
       1  --2--  3    4    5
          |   |       |
          6   7     --8--
                    |   |
                    9   10
    */
   int i; // loop itterator

   /* create the forest */
    forest *forest = malloc(sizeof(struct forest));
    if (!forest)
        return NULL;
    forest->treeCount = 0;

    /* create the tree */
    tree tree1 = createTree();
    node nodes[11];

    for (i=0; i<11; i++)
    {
        nodes[i] = createNode(i);                           // Create the node
        tree1.nodes = addNode(tree1.nodes, nodes[i]);       // Add the node to the tree
    }

    /* link the nodes */
    tree1.links = linkNodes(tree1.links, 0, 1);
    tree1.links = linkNodes(tree1.links, 0, 2);
    tree1.links = linkNodes(tree1.links, 0, 3);
    tree1.links = linkNodes(tree1.links, 0, 4);
    tree1.links = linkNodes(tree1.links, 0, 5);
    tree1.links = linkNodes(tree1.links, 2, 6);
    tree1.links = linkNodes(tree1.links, 2, 7);
    tree1.links = linkNodes(tree1.links, 4, 8);
    tree1.links = linkNodes(tree1.links, 8, 9);
    tree1.links = linkNodes(tree1.links, 8, 10);
    
    /* Manually set the root node */
    tree1.nodes->nodes[0].level = 0;

    /* add tree to the forest */
    forest = addTree(forest, tree1);

    return forest;
}

forest *testForest3(void)
{
    /* Large Tree
                ----------------0------------------
                |               |                  |
     -----------1-----------    2           -------3-------
     |          |          |    |           |             |
     4  --------5--------  6    7  ---------8-----------  9
        |   |   |   |   |          |   |   |   |   |   |                      
        10  11  12  13  14         15  16  17  18  19  20
    */
   int i; // loop itterator

   /* create the forest */
    forest *forest = malloc(sizeof(struct forest));
    if (!forest)
        return NULL;
    forest->treeCount = 0;

    /* create the tree */
    tree tree1 = createTree();
    node nodes[21];

    for (i=0; i<21; i++)
    {
        nodes[i] = createNode(i);                           // Create the node
        tree1.nodes = addNode(tree1.nodes, nodes[i]);       // Add the node to the tree
    }

    /* link the nodes */
    tree1.links = linkNodes(tree1.links, 0, 1);
    tree1.links = linkNodes(tree1.links, 0, 2);
    tree1.links = linkNodes(tree1.links, 0, 3);
    tree1.links = linkNodes(tree1.links, 1, 4);
    tree1.links = linkNodes(tree1.links, 1, 5);
    tree1.links = linkNodes(tree1.links, 1, 6);
    tree1.links = linkNodes(tree1.links, 2, 7);
    tree1.links = linkNodes(tree1.links, 3, 8);
    tree1.links = linkNodes(tree1.links, 3, 9);
    tree1.links = linkNodes(tree1.links, 5, 10);
    tree1.links = linkNodes(tree1.links, 5, 11);
    tree1.links = linkNodes(tree1.links, 5, 12);
    tree1.links = linkNodes(tree1.links, 5, 13);
    tree1.links = linkNodes(tree1.links, 5, 14);
    tree1.links = linkNodes(tree1.links, 8, 15);
    tree1.links = linkNodes(tree1.links, 8, 16);
    tree1.links = linkNodes(tree1.links, 8, 17);
    tree1.links = linkNodes(tree1.links, 8, 18);
    tree1.links = linkNodes(tree1.links, 8, 19);
    tree1.links = linkNodes(tree1.links, 8, 20);
    
    /* Manually set the root node */
    tree1.nodes->nodes[0].level = 0;

    /* add tree to the forest */
    forest = addTree(forest, tree1);

    return forest;
}

forest *testForest4(void)
{
    /* Agorithm TR Example tree
'                   --------0--------
'                   |               |
'               ----1----       ----2----
'               |       |       |       |
'           ----3----   4       5   ----6----
'           |       |               |       |
'       ----7----   8               9   ----10---
'       |       |                       |       |
    ----11---   12                      13  ----14---
    |       |                               |       |
    15  ----16---                       ----17---   18
        |       |                       |       |
        19  ----20---               ----21---   22
            |       |               |       |
            23  ----24---       ----25---   26
                |       |       |       |
                27      28      29      30
        */
   int i; // loop itterator

   /* create the forest */
    forest *forest = malloc(sizeof(struct forest));
    if (!forest)
        return NULL;
    forest->treeCount = 0;

    /* create the tree */
    tree tree1 = createTree();
    node nodes[31];

    for (i=0; i<31; i++)
    {
        nodes[i] = createNode(i);                           // Create the node
        tree1.nodes = addNode(tree1.nodes, nodes[i]);       // Add the node to the tree
    }

    /* link the nodes */
    tree1.links = linkNodes(tree1.links, 0, 1);
    tree1.links = linkNodes(tree1.links, 0, 2);
    tree1.links = linkNodes(tree1.links, 1, 3);
    tree1.links = linkNodes(tree1.links, 1, 4);
    tree1.links = linkNodes(tree1.links, 2, 5);
    tree1.links = linkNodes(tree1.links, 2, 6);
    tree1.links = linkNodes(tree1.links, 3, 7);
    tree1.links = linkNodes(tree1.links, 3, 8);
    tree1.links = linkNodes(tree1.links, 6, 9);
    tree1.links = linkNodes(tree1.links, 6, 10);
    tree1.links = linkNodes(tree1.links, 7, 11);
    tree1.links = linkNodes(tree1.links, 7, 12);
    tree1.links = linkNodes(tree1.links, 10, 13);
    tree1.links = linkNodes(tree1.links, 10, 14);
    tree1.links = linkNodes(tree1.links, 11, 15);
    tree1.links = linkNodes(tree1.links, 11, 16);
    tree1.links = linkNodes(tree1.links, 14, 17);
    tree1.links = linkNodes(tree1.links, 14, 18);
    tree1.links = linkNodes(tree1.links, 16, 19);
    tree1.links = linkNodes(tree1.links, 16, 20);
    tree1.links = linkNodes(tree1.links, 17, 21);
    tree1.links = linkNodes(tree1.links, 17, 22);
    tree1.links = linkNodes(tree1.links, 20, 23);
    tree1.links = linkNodes(tree1.links, 20, 24);
    tree1.links = linkNodes(tree1.links, 21, 25);
    tree1.links = linkNodes(tree1.links, 21, 26);
    tree1.links = linkNodes(tree1.links, 24, 27);
    tree1.links = linkNodes(tree1.links, 24, 28);
    tree1.links = linkNodes(tree1.links, 25, 29);
    tree1.links = linkNodes(tree1.links, 25, 30);

    
    /* Manually set the root node */
    tree1.nodes->nodes[0].level = 0;

    /* add tree to the forest */
    forest = addTree(forest, tree1);

    return forest;
}

forest *testForest5(void)
{
    /* Real world example - An example that failed in use but did not show up in previous tests.
  
        ------------0-----------
        |                      |
    ----1----              ----2----
    |       |              |       |
    3   ----4----          5       6
        |       |
        7       8
                |
                9
        */
   int i; // loop itterator

   /* create the forest */
    forest *forest = malloc(sizeof(struct forest));
    if (!forest)
        return NULL;
    forest->treeCount = 0;

    /* create the tree */
    tree tree1 = createTree();
    node nodes[10];

    for (i=0; i<10; i++)
    {
        nodes[i] = createNode(i);                           // Create the node
        tree1.nodes = addNode(tree1.nodes, nodes[i]);       // Add the node to the tree
    }

    /* link the nodes */
    tree1.links = linkNodes(tree1.links, 0, 1);
    tree1.links = linkNodes(tree1.links, 0, 2);
    tree1.links = linkNodes(tree1.links, 1, 3);
    tree1.links = linkNodes(tree1.links, 1, 4);
    tree1.links = linkNodes(tree1.links, 2, 5);
    tree1.links = linkNodes(tree1.links, 2, 6);
    tree1.links = linkNodes(tree1.links, 4, 7);
    tree1.links = linkNodes(tree1.links, 4, 8);
    tree1.links = linkNodes(tree1.links, 8, 9);
        
    /* Manually set the root node */
    tree1.nodes->nodes[0].level = 0;

    /* add tree to the forest */
    forest = addTree(forest, tree1);

    return forest;
}

forest *testForest6(void)
{
    /* Real world example - An example that failed in use but did not show up in previous tests.
  
            ----------------------0------------------
            |               |           |           |
        ----1----       ----2----   ----3----   ----4----   
        |       |       |       |   |       |   |       |
    ----6----   5       7       8   9       10  11      12
    |       |       
    14      13      
    |                
    15 
        */
   int i; // loop itterator

   /* create the forest */
    forest *forest = malloc(sizeof(struct forest));
    if (!forest)
        return NULL;
    forest->treeCount = 0;

    /* create the tree */
    tree tree1 = createTree();
    node nodes[16];

    for (i=0; i<16; i++)
    {
        nodes[i] = createNode(i);                           // Create the node
        tree1.nodes = addNode(tree1.nodes, nodes[i]);       // Add the node to the tree
    }

    /* link the nodes */
    tree1.links = linkNodes(tree1.links, 0, 1);
    tree1.links = linkNodes(tree1.links, 0, 2);
    tree1.links = linkNodes(tree1.links, 0, 3);
    tree1.links = linkNodes(tree1.links, 0, 4);
    tree1.links = linkNodes(tree1.links, 1, 6);
    tree1.links = linkNodes(tree1.links, 1, 5);
    tree1.links = linkNodes(tree1.links, 2, 7);
    tree1.links = linkNodes(tree1.links, 2, 8);
    tree1.links = linkNodes(tree1.links, 3, 9);
    tree1.links = linkNodes(tree1.links, 3, 10);
    tree1.links = linkNodes(tree1.links, 4, 11);
    tree1.links = linkNodes(tree1.links, 4, 12);
    tree1.links = linkNodes(tree1.links, 6, 14);
    tree1.links = linkNodes(tree1.links, 6, 13);
    tree1.links = linkNodes(tree1.links, 14, 15);

    /* Manually set the root node */
    tree1.nodes->nodes[0].level = 0;

    /* add tree to the forest */
    forest = addTree(forest, tree1);

    return forest;
}

forest *testForest7(void)
{
    /* Real world example - An example that failed in use but did not show up in previous tests.
        What happens when 5 is a child of both 2 and 3
  
            ----0----
            |   |   |           
            1   2   3 
            |   |___| 
            4   5           
        */
   int i; // loop itterator

   /* create the forest */
    forest *forest = malloc(sizeof(struct forest));
    if (!forest)
        return NULL;
    forest->treeCount = 0;

    /* create the tree */
    tree tree1 = createTree();
    node nodes[6];

    for (i=0; i<6; i++)
    {
        nodes[i] = createNode(i);                           // Create the node
        tree1.nodes = addNode(tree1.nodes, nodes[i]);       // Add the node to the tree
    }

    /* link the nodes */
    tree1.links = linkNodes(tree1.links, 0, 1);
    tree1.links = linkNodes(tree1.links, 1, 4);
    tree1.links = linkNodes(tree1.links, 0, 2);
    tree1.links = linkNodes(tree1.links, 2, 5);
    tree1.links = linkNodes(tree1.links, 0, 3);
    tree1.links = linkNodes(tree1.links, 3, 5);

    /* Manually set the root node */
    tree1.nodes->nodes[0].level = 0;

    /* add tree to the forest */
    forest = addTree(forest, tree1);

    return forest;
}