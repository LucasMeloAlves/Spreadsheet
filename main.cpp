#include <QApplication>
#include "Spreadsheet.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Spreadsheet spreadsheet;
    spreadsheet.setWindowTitle("Foglio di Calcolo Qt");
    spreadsheet.show();

    return app.exec();
}