// Data.h
using namespace std;


//interface da classe
class Data
{
private:
    int dia;
    int mes;
    int ano;

public:
    Data();
    Data(int, int, int);

    void ler();
    void imprimir();

//métodos get ou de acesso
    int getDia();
    int getMes();
    int getAno();

//métodos set ou de modificação de valores
    void setDia(int);
    void setMes(int);
    void setAno(int);

};

//Corpo dos métodos
Data::Data()
{
    this->dia = 0;
    this->mes = 0;
    this->ano = 0;
}

Data::Data(int dia, int mes, int ano)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

void Data::ler()
{
    cout<<"\nLer dados de Data\n";
    cout<<"Informe o Dia:";
    getline(cin, dia);
    fflush(stdin);
    cout<<"Informe o Mes:";
    getline(cin, mes);
    fflush(stdin);
    cout<<"Informe o Ano:";
    getline(cin, ano);
    fflush(stdin);
}

void Data::imprimir()
{
    cout<<"\nImprimir dados de Data\n";
    cout<<"Dia:" << dia << endl;
    cout<<"Mes:" << mes << endl;
    cout<<"Ano:" << ano << endl;
}

int Data::getDia()
{
    return this->dia;
}

void Data::setDia(int dia)
{
    this->dia = dia;
}

int Data::getMes()
{
    return this->mes;
}

void Data::setMes(int mes)
{
    this->mes = mes;
}

int Data::getAno()
{
    return this->ano;
}

void Data::setAno(int ano)
{
    this->ano = ano;
}
