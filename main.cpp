#include <QApplication>
#include <QTextStream>
#include <QMainWindow>
#include <QString>
#include <iostream>


void sample_using_qstring(){
    QTextStream out(stdout);

    QString a = "love";

    a.append(" pizza!");
    a.prepend("I ");
    out << a << endl;
    out << "The string has " << a.count()
        << " characters" << endl;
    out << a.toUpper() << endl;
    out << a.toLower() << endl;
}

int main(int argc, char *argv[]) {
    std::cout << "Qt5 version: " << QT_VERSION_STR << std::endl;
    sample_using_qstring();

    /*
     * @brief Must construct a QApplication before using a QWidget
     * */
    QApplication a(argc,argv);
    QMainWindow window;

    window.resize(250,150);
    window.setWindowTitle("Simple window");
    window.show();

    return a.exec();
}