#include "viewfuncionario.h"
#include "ui_viewfuncionario.h"

viewfuncionario::viewfuncionario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewfuncionario)
{
    ui->setupUi(this);



    ui->tbwFuncionario->setColumnCount(5);
    QStringList header = {"Nome", "CPF", "Cargo","Salario","cadeira"};

    ui->tbwFuncionario->setHorizontalHeaderLabels(header);

    ui->tbwFuncionario->setColumnWidth(0, 155);
    ui->tbwFuncionario->setColumnWidth(1, 155);
    ui->tbwFuncionario->setColumnWidth(1, 150);
    ui->tbwFuncionario->setColumnWidth(1, 150);
    ui->tbwFuncionario->setColumnWidth(1, 150);
    ui->tbwFuncionario->setColumnWidth(1, 150);

    ifstream ifs("Funcionario.txt");
    if(ifs.is_open()){

        //char* nome, int cpf, char* cargo, float salario, int cadeira

        int linha = 0;

        char nome[30];
        int cpf;
        char cargo[30];
        float salario;
        int cadeira;

        ifs >> nome;
        ifs >> cpf;
        ifs >> cargo;
        ifs >> salario;
        ifs >> cadeira;

        while(ifs.good()){
            ui->tbwFuncionario->insertRow(linha);

            ui->tbwFuncionario->setItem(linha, 0, new QTableWidgetItem(nome));
            ui->tbwFuncionario->setItem(linha, 1, new QTableWidgetItem(to_string(cpf).c_str()));
            ui->tbwFuncionario->setItem(linha, 2, new QTableWidgetItem(cargo));
            ui->tbwFuncionario->setItem(linha, 3, new QTableWidgetItem(to_string(salario).c_str()));
            ui->tbwFuncionario->setItem(linha, 4, new QTableWidgetItem(to_string(cadeira).c_str()));

            ifs >> nome;
            ifs >> cpf;
            ifs >> cargo;
            ifs >> salario;
            ifs >> cadeira;

            linha++;
        }
    }
    ifs.close();


}

viewfuncionario::~viewfuncionario()
{
    delete ui;
}

void viewfuncionario::on_btnBuscar_clicked()
{
    ui->tbwFuncionario->setRowCount(0); // limpando a tabela

    QString Qnome = ui->edtBuscar->text();
    char char_nome[30];
    strcpy(char_nome, Qnome.toStdString().c_str()); //transforma o nome de QString para array de char
    ifstream ifs("Funcionario.txt");

        if (ifs.is_open())
        {

            int linha = 0;

            char nome[30];
            char cpf[16];
            char cargo[30];
            float salario;
            int cadeira;

            bool achou = false;

            ifs >> nome;
            ifs >> cpf;
            ifs >> cargo;
            ifs >> salario;
            ifs >> cadeira;


            while (ifs.good() && !achou )
            {
                if (!strcmp(char_nome, ""))
                {
                    ui->tbwFuncionario->insertRow(linha);

                    ui->tbwFuncionario->setItem(linha, 0, new QTableWidgetItem(nome));
                    ui->tbwFuncionario->setItem(linha, 1, new QTableWidgetItem(cpf));
                    ui->tbwFuncionario->setItem(linha, 2, new QTableWidgetItem(cargo));
                    ui->tbwFuncionario->setItem(linha, 3, new QTableWidgetItem(to_string(salario).c_str()));
                    ui->tbwFuncionario->setItem(linha, 4, new QTableWidgetItem(to_string(cadeira).c_str()));

                    ifs >> nome;
                    ifs >> cpf;
                    ifs >> cargo;
                    ifs >> salario;
                    ifs >> cadeira;

                    linha++;
                }
                else
                {
                    if (!strcmp(char_nome, nome))
                    {

                        ui->tbwFuncionario->insertRow(linha);

                        ui->tbwFuncionario->setItem(linha, 0, new QTableWidgetItem(nome));
                        ui->tbwFuncionario->setItem(linha, 1, new QTableWidgetItem(cpf));
                        ui->tbwFuncionario->setItem(linha, 2, new QTableWidgetItem(cargo));
                        ui->tbwFuncionario->setItem(linha, 3, new QTableWidgetItem(to_string(salario).c_str()));
                        ui->tbwFuncionario->setItem(linha, 4, new QTableWidgetItem(to_string(cadeira).c_str()));

                        achou = true;




                    }
                    else
                    {
                        ifs >> nome;
                        ifs >> cpf;
                        ifs >> cargo;
                        ifs >> salario;
                        ifs >> cadeira;
                    }
                }

            }
        }
        ifs.close();
}

void viewfuncionario::on_delete_2_clicked()
{
    remove("Funcionario.txt"); //apagando o txt de servicos, para poder inserir o novo com modificações.

    int qtd_linhas;
    qtd_linhas = ui->tbwFuncionario->rowCount();

    Profissional* p;

    char nome[30];
    char cpf[16];
    char cargo[30];
    float salario;
    int cadeira;

    int linha = 0;

    QString qnome;
    QString qcpf;
    QString qcargo;
    QString qsalario;
    QString qcadeira;

    int selec;
    for(int i = 0; i< qtd_linhas; i++)
    {
        //lendo informaçoes
        qnome = ui->tbwFuncionario->item(linha,0)->text();
        qcpf = ui->tbwFuncionario->item(linha,1)->text();
        qcargo = ui->tbwFuncionario->item(linha,2)->text();
        qsalario = ui->tbwFuncionario->item(linha,3)->text();
        qcadeira = ui->tbwFuncionario->item(linha,4)->text();


         //abaixo convertendo de QString para os tipos necessarios
        strcpy(nome, qnome.toStdString().c_str());
        strcpy(cpf, qcpf.toStdString().c_str());
        strcpy(cargo, qcargo.toStdString().c_str());
        salario = qsalario.toFloat();
        cadeira = qcadeira.toInt();

        selec = ui->tbwFuncionario->selectionModel()->currentIndex().row(); //pegando a linha selecionada
     //verificando se é o selecionado

     if(((ui->tbwFuncionario ->item(selec,1)->text()))== cpf)
     {
         linha++;
     }
     else
     {
         p = new Profissional(nome, cpf, cargo,salario,cadeira);
         Cadastro cad;
         cad.gravaFuncionario(p);
         linha++;
     }

    }

    //abaixo codigo para mostrar os novos valores na tabela

     ui->tbwFuncionario->setRowCount(0); // limpando a tabela

     ifstream ifs("Funcionario.txt");
     linha = 0;
     if (ifs.is_open())
     {

         ifs >> nome;
         ifs >> cpf;
         ifs >> cargo;
         ifs >> salario;
         ifs >> cadeira;


        while(ifs.good())
        {
            ui->tbwFuncionario->insertRow(linha);
            ui->tbwFuncionario->setItem(linha, 0, new QTableWidgetItem(nome));
            ui->tbwFuncionario->setItem(linha, 1, new QTableWidgetItem(cpf));
            ui->tbwFuncionario->setItem(linha, 2, new QTableWidgetItem(cargo));
            ui->tbwFuncionario->setItem(linha, 3, new QTableWidgetItem(to_string(salario).c_str()));
            ui->tbwFuncionario->setItem(linha, 4, new QTableWidgetItem(to_string(cadeira).c_str()));

            ifs >> nome;
            ifs >> cpf;
            ifs >> cargo;
            ifs >> salario;
            ifs >> cadeira;

            linha++;
       }
      }


}



void viewfuncionario::on_edit_clicked()
{
    qDebug()<<"teste";

    remove("Funcionario.txt"); //apagando o txt de servicos, para poder inserir o novo com modificações.

    int qtd_linhas;
    qtd_linhas = ui->tbwFuncionario->rowCount();

    Profissional* p;

    char nome[30];
    char cpf[16];
    char cargo[30];
    float salario;
    int cadeira;

    int linha = 0;

    QString qnome;
    QString qcpf;
    QString qcargo;
    QString qsalario;
    QString qcadeira;

    for(int i = 0; i< qtd_linhas; i++)
    {
        //lendo informaçoes
        qnome = ui->tbwFuncionario->item(linha,0)->text();
        qcpf = ui->tbwFuncionario->item(linha,1)->text();
        qcargo = ui->tbwFuncionario->item(linha,2)->text();
        qsalario = ui->tbwFuncionario->item(linha,3)->text();
        qcadeira = ui->tbwFuncionario->item(linha,4)->text();

        qDebug() << ui->tbwFuncionario->item(linha,2)->text();
         //abaixo convertendo de QString para os tipos necessarios
        strcpy(nome, qnome.toStdString().c_str());
        strcpy(cpf, qcpf.toStdString().c_str());
        strcpy(cargo, qcargo.toStdString().c_str());
        salario = qsalario.toFloat();
        cadeira = qcadeira.toInt();

        p = new Profissional(nome, cpf, cargo,salario,cadeira);
        Cadastro cad;
        cad.gravaFuncionario(p);
        linha++;
    }
}
