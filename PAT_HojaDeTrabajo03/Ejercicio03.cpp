#include "Ejercicio03.h"

Node<int>* Ejercicio03::copyList(Node<int>* head)
{
    if (!head) 
    {
        return nullptr;
    }
    std::unordered_map<Node<int>*, Node<int>*> nodeMap;

    Node<int>* originalNode = head;
    while (originalNode) 
    {
        nodeMap[originalNode] = new Node<int>{ originalNode->value, nullptr, nullptr };
        originalNode = originalNode->next;
    }

    originalNode = head;
    while (originalNode) 
    {
        nodeMap[originalNode]->next = nodeMap[originalNode->next];
        nodeMap[originalNode]->random = nodeMap[originalNode->random];
        originalNode = originalNode->next;
    }
    return nodeMap[head];
}
