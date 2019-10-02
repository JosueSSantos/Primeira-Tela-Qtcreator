#include "relatorios.h"
#include "ui_relatorios.h"
#include "qdebug.h"
#include "cadastro.h"
#include <QMessageBox>
#include "QTableWidgetItem"

Relatorios::Relatorios(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Relatorios)
{
    ui->setupUi(this);
    configuracaoRelatorio();
}

Relatorios::~Relatorios()
{
    delete ui;
}

void Relatorios::on_btClicked_Editar()
{


    qDebug() << "log/Clicou em botão Editar";
}

void Relatorios::on_btClicked_Filtrar()
{
     ui->stCadastro->setCurrentIndex(1);
    qDebug() << "log/Clicou em Botão Filtrar";
}

void Relatorios::on_btClicked_Limpar()
{
    ui ->stCadastro ->setCurrentIndex(0);
    qDebug() << "log/Clicou em Botão Limpar";

}

void Relatorios::montarTw()
{
    QList<long long> list;
    list << 1;
    list << 1;
    list << 1;

    int linha = 0;
    foreach (long long id, list) {
        ui->tableWidget->setRowCount(linha);

        QTableWidgetItem* item = new QTableWidgetItem;
        item->setText("1");
        ui->tableWidget->setItem(linha, 0, item);

        linha++;
    }
}

void Relatorios ::configuracaoRelatorio()
{
    setConteiners();
    Cadastro* cadatro = new Cadastro();
    ui->stCadastro->addWidget(cadatro);

    montarTw();

}
void Relatorios :: setConteiners()
{
   connect(ui -> pbEditar,SIGNAL(clicked()),this,SLOT(on_btClicked_Editar()));
   connect(ui -> pbLimpar,SIGNAL(clicked()),this,SLOT(on_btClicked_Limpar()));
   connect(ui -> pbFiltrar,SIGNAL(clicked()),this,SLOT(on_btClicked_Filtrar()));
}
