#include "mainwindow.h"
#include "users.h"
#include <vector>
#include <QApplication>

using std::string;
//directed graph to store connections. Implemented as a vector of linked lists
class Connections {
    struct Node{
        string username;
        Node* next;
        Node(string id): username(id), next(nullptr){};
    };
    //connections graph
    std::vector<Node*> connections_graph;
    int vertices = 0;
public:
    //new user
    void addVertex(string username){
        connections_graph.push_back(new Node(username));
        vertices++;
    }
    //new connection
    void addEdge(string username1, string username2){
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
    std::vector<string> returnAllConnections(string username_){
        int index;
        for(int i=0; i<connections_graph.size(); ++i){
            if(connections_graph[i]->username==username_){
                index = i;
            }
        }
        std::vector<string> all_connections;
        Node* current = connections_graph[index];
        do{
            all_connections.push_back(current->username);
            current = current->next;
        } while(current);
        return all_connections;
    }
};



int main(int argc, char *argv[])
{
    Users users = Users();
    Connections connections = Connections();

    QApplication a(argc, argv);
    MainWindow w(&users);
    w.show();
    return a.exec();
}
