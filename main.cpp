#include <QApplication>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Creazione di una tabella con 5 righe e 3 colonne
    QTableWidget table(20, 30);

    // Inserimento di intestazioni di riga e colonna


    // Inserimento dati nella tabella
    QTableWidgetItem *item1 = new QTableWidgetItem("Marco");
    table.setItem(0, 0, item1);

    QTableWidgetItem *item2 = new QTableWidgetItem("Rossi");
    table.setItem(0, 1, item2);

    QTableWidgetItem *item3 = new QTableWidgetItem("25");
    table.setItem(0, 2, item3);

    // Aggiunta della tabella a un layout
    QWidget window;
    QVBoxLayout *layout = new QVBoxLayout(&window);
    layout->addWidget(&table);

    window.setLayout(layout);
    window.setWindowTitle("Foglio di calcolo con Qt");
    window.show();

    return app.exec();
}