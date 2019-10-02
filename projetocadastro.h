#ifndef PROJETOCADASTRO_H
#define PROJETOCADASTRO_H

#include <QMainWindow>

namespace Ui {
class ProjetoCadastro;
}

class ProjetoCadastro : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProjetoCadastro(QWidget *parent = nullptr);
    ~ProjetoCadastro();

private:
    Ui::ProjetoCadastro *ui;
};

#endif // PROJETOCADASTRO_H
