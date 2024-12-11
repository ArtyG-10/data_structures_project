#include "mainwindow.h"
#include "users.h"
#include "connections.h"
#include <QApplication>




int main(int argc, char *argv[])
{
    Users users = Users();
    Connections connections = Connections();

    //test data
    users.add_user("tom","123");
    connections.addVertex("tom");
    users.add_user("kim","234");
    connections.addVertex("kim");
    users.add_user("frank","345");
    connections.addVertex("frank");
    users.add_user("amy","456");
    connections.addVertex("amy");

    //test connection tom->kim->frank but only frank follows him back
    connections.addEdge("tom","kim");
    connections.addEdge("tom","frank");
    connections.addEdge("frank","tom");

    //test message from amy to tom
    users.send_message("amy", "tom", "let's be friends");



    QApplication a(argc, argv);
    MainWindow w(&users, &connections);
    w.show();
    return a.exec();
}
