//
// Created by lucas on 15/03/24.
//

#ifndef SPREADSHEET_SPREADSHEET_H
#define SPREADSHEET_SPREADSHEET_H
#include <QApplication>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>

#include <QApplication>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>

class Spreadsheet : public QWidget {
public:
    Spreadsheet(QWidget *parent = nullptr) : QWidget(parent) {
        setupUi();
    }

private:
    void setupUi() {

        QVBoxLayout *layout = new QVBoxLayout(this);


        table = new QTableWidget(15, 26, this);
        layout->addWidget(table);


        operationLineEdit = new QLineEdit(this);
        layout->addWidget(operationLineEdit);


        QPushButton *calculateButton = new QPushButton("Calcola", this);
        connect(calculateButton, &QPushButton::clicked, this, &Spreadsheet::calculate);
        layout->addWidget(calculateButton);

        setLayout(layout);
    }

    void calculate() {
        QString operation = operationLineEdit->text();

        if (operation.isEmpty()) {
            QMessageBox::warning(this, "Errore", "Inserisci un'espressione nell'operazione");
            return;
        }

        // Esegui il calcolo dell'espressione
        try {
            QVariant result = calculateExpression(operation);
            if (result.isValid()) {
                QMessageBox::information(this, "Risultato", "Il risultato è: " + result.toString());
            } else {
                QMessageBox::warning(this, "Errore", "Impossibile valutare l'operazione");
            }
        } catch (const std::exception &e) {
            QMessageBox::warning(this, "Errore", e.what());
        }
    }


    QTableWidget *table;
    QLineEdit *operationLineEdit;
};



#endif //SPREADSHEET_SPREADSHEET_H
