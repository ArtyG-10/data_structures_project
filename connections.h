#ifndef CONNECTIONS_H
#define CONNECTIONS_H
#include <vector>
#include <string>


//directed graph to store connections. Implemented as a vector of linked lists
class Connections {
    struct Node{
        std::string username;
        Node* next;
        Node(std::string id): username(id), next(nullptr){};
    };
    //connections graph
    std::vector<Node*> connections_graph;
    int vertices = 0;
public:
    //new user
    void addVertex(std::string username){
        connections_graph.push_back(new Node(username));
        vertices++;
    }
    //new connection
    void addEdge(std::string username1, std::string username2){
        int index;
        for(int i=0; i<connections_graph.size(); ++i){
            if(connections_graph[i]->username == username1){
                index = i;
            }
        }
        Node* current = connections_graph[index];
        while(current->next){
            current = current->next;
        }
        current->next = new Node(username2);
    }
    //check for all of a users connections
    std::vector<std::string> returnAllConnections(std::string username_){
        int index;
        for(int i=0; i<connections_graph.size(); ++i){
            if(connections_graph[i]->username==username_){
                index = i;
            }
        }
        std::vector<std::string> all_connections;
        Node* current = connections_graph[index]->next;
        while(current){
            all_connections.push_back(current->username);
            current = current->next;
        }
        return all_connections;
    }
};


#endif // CONNECTIONS_H
