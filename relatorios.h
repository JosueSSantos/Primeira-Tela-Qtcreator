#ifndef RELATORIOS_H
#define RELATORIOS_H

#include <QWidget>

namespace Ui {
class Relatorios;
}

class Relatorios : public QWidget
{
    Q_OBJECT

public:
    explicit Relatorios(QWidget *parent = nullptr);
    ~Relatorios();
private slots:
    void on_btClicked_Editar();
    void on_btClicked_Filtrar();
    void on_btClicked_Limpar();
    void montarTw();

private:
    Ui::Relatorios *ui;
    void configuracaoRelatorio();
    void setConteiners();
};

#endif // RELATORIOS_H
