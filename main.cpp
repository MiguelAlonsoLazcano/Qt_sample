#include <QApplication>
#include <QTextStream>
#include <QMainWindow>
#include <QString>
#include <QLabel>
#include <iostream>

/*
 * @brief QString basics
 * */
QString create_qstring(){
    QString a = "love";

    a.append(" pizza!");
    a.prepend("I ");
    return a;
}

/*
 * @brief QTextStream & QString basics
 * */
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
    std::cout << "\tQt5 version: " << QT_VERSION_STR << std::endl;

    /*
     * @brief Must construct a QApplication before using a QWidget
     * */
    QApplication a(argc,argv);
    QMainWindow window;
    QLabel *label = new QLabel(&window);

    window.resize(250,150);
    window.setWindowTitle("Simple window");
    label->setText(create_qstring());
    window.show();

    return a.exec();
}