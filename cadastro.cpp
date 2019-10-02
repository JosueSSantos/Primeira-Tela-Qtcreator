#include "cadastro.h"
#include "ui_cadastro.h"
#include "qdebug.h"

Cadastro::Cadastro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
    configuracaoInicial();
}

Cadastro::~Cadastro()
{
    delete ui;
}
    //Log's Botões
void Cadastro::on_btClicked_Filial()
    {
        qDebug() << "log/Clique -> Botão pesquisa Filial ";
    }
void Cadastro :: on_btClicked_Departamento()
    {
        qDebug() << "log/Clique -> Botão pesquisa Departamento ";
    }

void Cadastro::on_btClicked_Secao()
    {
        qDebug() << "log/Clique -> Botão pesquisa Seção ";
    }

void Cadastro::on_btClicked_Categoria()
    {
        qDebug() << "log/Clique - > Botão pesquisa Categoria";

    }

void Cadastro::on_btCiked_Produto()
    {
        qDebug() << "log/Clique -> Botão pesquisa Produto ";
    }

void Cadastro::on_clicked_btSalvar()
    {
        qDebug() << "log/Clique -> Botão salvar";
    }

void Cadastro::on_btClicked_btLimpar()
    {
        qDebug() << "log/Clique -> Botão Limpar";
}
//Log's Caixas de Dialogos
void Cadastro::on_caixaEnter_Filial()
    {
        qDebug()<< "log/Clique -> Caixa de texto Filial";
    }

void Cadastro::on_caixaEnter_Departamento()
    {
        qDebug() << "log/Clique -> Caixa de Texto Departamento";
    }

void Cadastro::on_caixaEnter_Secao()
    {
        qDebug() << "log/Clique -> Caixa de Texto Seção";
    }

void Cadastro::on_caixaEnter_Categoria()
    {
        qDebug() << "log/Clique -> Caixa de Texto Categoria";
    }

void Cadastro::on_caixaEnter_Produto()
    {
        qDebug() << "log/Clique -> Caixa de Texto Produto";
    }

void Cadastro::on_caixaEnter_Base()
    {
        qDebug() << "log/Clique -> Caixa de Texto Base";
    }

void Cadastro::configuracaoInicial()
    {
        setConteiners();
    }
void Cadastro:: setConteiners()
{

    //Log's Botões;
     connect(ui -> bt_Filial ,SIGNAL(clicked()),this,SLOT(on_btClicked_Filial()));
     connect(ui -> bt_Dep,SIGNAL(clicked()),this,SLOT(on_btClicked_Departamento()));
     connect(ui -> bt_Secao,SIGNAL(clicked()),this,SLOT(on_btClicked_Secao()));
     connect(ui -> bt_Categ,SIGNAL(clicked()),this,SLOT(on_btClicked_Categoria()));
     connect(ui -> bt_Produto,SIGNAL(clicked()),this,SLOT(on_btCiked_Produto()));

     // log's Salvar/Limpar
     connect(ui -> bt_Limpar,SIGNAL(clicked()),this,SLOT(on_btClicked_btLimpar()));
     connect(ui -> bt_Salvar,SIGNAL(clicked()),this,SLOT(on_clicked_btSalvar()));


     //Log's caixas
     connect(ui -> caixa_Filial,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Filial()));
     connect(ui -> caixa_Depart,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Departamento()));
     connect(ui -> caixa_Secao,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Secao()));
     connect(ui -> caixa_Categoria,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Categoria()));
     connect(ui -> caixa_Produto,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Produto()));


}

