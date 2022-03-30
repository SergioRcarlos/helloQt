#include <QCoreApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Hello World!\n";

    qDebug() << "Now github and QtCreator are getting along with each other\n";

    return a.exec();
}
