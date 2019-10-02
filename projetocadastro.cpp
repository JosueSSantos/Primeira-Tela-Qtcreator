#include "projetocadastro.h"
#include "ui_projetocadastro.h"
#include "cadastro.h"
#include "relatorios.h"
ProjetoCadastro::ProjetoCadastro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProjetoCadastro)
{
    ui->setupUi(this);
    Cadastro* telacadastro = new Cadastro();

    telacadastro->show();
    Relatorios* relatorios = new  Relatorios();
    relatorios->show();
}

ProjetoCadastro::~ProjetoCadastro()
{
    delete ui;
}
