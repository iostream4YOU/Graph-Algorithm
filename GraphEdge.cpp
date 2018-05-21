//
// Created by omar_swidan on 19/05/18.
//

#include "GraphEdge.h"

GraphEdge::GraphEdge(int weight, GraphNode *Node1, GraphNode *Node2) {
    this->Node1 = Node1;
    this->Node2 = Node2;
    this->weight = weight;
}


bool GraphEdge::operator==(GraphEdge *edge) {
    if (edge->Node1 == Node1) {
        if (edge->Node2 == Node2)
            return true;
    } else if (edge->Node1 == Node2) {
        if (edge->Node2 == Node1)
            return true;
    } else if (edge->Node2 == Node2) {
        if (edge->Node1 == Node1)
            return true;
    } else if (edge->Node2 == Node1) {
        if (edge->Node1 == Node2)
            return true;
    }


    return false;
}

int GraphEdge::getWeight()  {
    return weight;
}

GraphNode *GraphEdge::getNode1()  {
    return Node1;
}

GraphNode *GraphEdge::getNode2()  {
    return Node2;
}
