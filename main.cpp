#include <QApplication>
#include <QTextStream>
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

int main() {
    std::cout << "Qt5 version: " << QT_VERSION_STR << std::endl;

    sample_using_qstring();

    return 0;
}