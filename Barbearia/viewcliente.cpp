#include "viewcliente.h"
#include "ui_viewcliente.h"

viewCliente::viewCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewCliente){


    ui->setupUi(this);

    ifstream ifs("Cliente.txt");

    ui->tbwCliente->setColumnCount(3);

    //Lista com itens do cabeçalho
    QStringList header = {"Nome", "Contato", "CPF"};

    // Cria o cabeçalho
    ui->tbwCliente->setHorizontalHeaderLabels(header);

    // Configura o tamanho da coluna
    ui->tbwCliente->setColumnWidth(0, 155);
    ui->tbwCliente->setColumnWidth(1, 155);
    ui->tbwCliente->setColumnWidth(1, 150);

    if(ifs.is_open()){

        int linha = 0;
        char nome[30];
        char contato[16];
        char cpf[16];

        ifs >> nome;
        ifs >> contato;
        ifs >> cpf;

        while(ifs.good()){


           // Insere linha
           ui->tbwCliente->insertRow(linha);

           // Adiciona nova celula
           ui->tbwCliente->setItem(linha, 0, new QTableWidgetItem(nome));
           ui->tbwCliente->setItem(linha, 1, new QTableWidgetItem(contato));
           ui->tbwCliente->setItem(linha, 2, new QTableWidgetItem(cpf));

           ifs >> nome;
           ifs >> contato;
           ifs >> cpf;

           linha++;

        }

    }
    ifs.close();
}

viewCliente::~viewCliente(){
    delete ui;
}



void viewCliente::on_btnBuscar_clicked(){
    ui->tbwCliente->setRowCount(0); // limpando a tabela

    QString Qnome = ui->edtBuscar->text();
    char char_nome[30];
    strcpy(char_nome, Qnome.toStdString().c_str()); //transforma o nome de QString para array de char
    ifstream ifs("Cliente.txt");

        if (ifs.is_open()){

            int linha = 0;
            char nome[30];
            char contato[16];
            char cpf[16];
            bool achou = false;

            ifs >> nome;
            ifs >> contato;
            ifs >> cpf;

            while (ifs.good() && !achou ){
                if (!strcmp(char_nome, "")){
                    ui->tbwCliente->insertRow(linha);

                    ui->tbwCliente->setItem(linha, 0, new QTableWidgetItem(nome));
                    ui->tbwCliente->setItem(linha, 1, new QTableWidgetItem(contato));
                    ui->tbwCliente->setItem(linha, 2, new QTableWidgetItem(cpf));

                    ifs >> nome;
                    ifs >> contato;
                    ifs >> cpf;
                    linha++;
                }
                else {
                    if (!strcmp(char_nome, nome)){

                        ui->tbwCliente->insertRow(linha);

                        ui->tbwCliente->setItem(linha, 0, new QTableWidgetItem(nome));
                        ui->tbwCliente->setItem(linha, 1, new QTableWidgetItem(contato));
                        ui->tbwCliente->setItem(linha, 2, new QTableWidgetItem(cpf));

                        achou = true;




                    }
                    else {
                        ifs >> nome;
                        ifs >> contato;
                        ifs >> cpf;
                    }
                }

            }
        }
        ifs.close();
}

void viewCliente::on_pushButton_clicked(){
    remove("Cliente.txt"); //apagando o txt de servicos, para poder inserir o novo com modificações.

    int qtd_linhas;
    qtd_linhas = ui->tbwCliente->rowCount();

    Cliente* c;

    int linha = 0;
    char nome[30];
    char contato[15];
    char cpf[16];

    QString qnome;
    QString qcpf;
    QString qcontato;

    for(int i = 0; i< qtd_linhas; i++)
    {
        //lendo informaçoes
        qnome = ui->tbwCliente->item(linha,0)->text();
        qcontato = ui->tbwCliente->item(linha,1)->text();
        qcpf = ui->tbwCliente->item(linha,2)->text();


        //abaixo convertendo de QString para os tipos necessarios
        strcpy(nome, qnome.toStdString().c_str());
        strcpy(cpf, qcpf.toStdString().c_str());
        strcpy(contato, qcontato.toStdString().c_str());



        c = new Cliente(nome, cpf, contato);
        Cadastro cad;
        cad.gravaCliente(c);
        linha++;
      }
}
