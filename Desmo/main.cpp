#include <QApplication>
#include "MainWindow.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);  // �������� ���������� QApplication

    MainWindow mainWindow;         // �������� ���������� �������� ����
    mainWindow.setWindowTitle("Graph Plotter like Desmos");  // ������� ��������� ����
    mainWindow.show();             // ����������� �������� ����

    return app.exec();             // ������ �������� ����� ��������� �������
}
