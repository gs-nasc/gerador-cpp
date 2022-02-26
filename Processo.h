// Processo.h
using namespace std;


//interface da classe
class Processo
{
private:
    int id;
    string descricao;
    string dataEntrada;
    string horaEntrada;

public:
    Processo();
    Processo(int, string, string, string);

    void ler();
    void imprimir();

//métodos get ou de acesso
    int getId();
    string getDescricao();
    string getDataEntrada();
    string getHoraEntrada();

//métodos set ou de modificação de valores
    void setId(int);
    void setDescricao(string);
    void setDataEntrada(string);
    void setHoraEntrada(string);

};

//Corpo dos métodos
Processo::Processo()
{
    this->id = 0;
    this->descricao = "";
    this->dataEntrada = "";
    this->horaEntrada = "";
}

Processo::Processo(int id, string descricao, string dataEntrada, string horaEntrada)
{
    this->id = id;
    this->descricao = descricao;
    this->dataEntrada = dataEntrada;
    this->horaEntrada = horaEntrada;
}

void Processo::ler()
{
    cout<<"\nLer dados de Processo\n";
    cout<<"Informe o Id:";
    getline(cin, id);
    fflush(stdin);
    cout<<"Informe o Descricao:";
    getline(cin, descricao);
    fflush(stdin);
    cout<<"Informe a Data de Entrada:";
    getline(cin, dataEntrada);
    fflush(stdin);
    cout<<"Informe a Hora de Entrada:";
    getline(cin, horaEntrada);
    fflush(stdin);
}

void Processo::imprimir()
{
    cout<<"\nImprimir dados de Processo\n";
    cout<<"Id:" << id << endl;
    cout<<"Descricao:" << descricao << endl;
    cout<<"Data de Entrada:" << dataEntrada << endl;
    cout<<"Hora de Entrada:" << horaEntrada << endl;
}

int Processo::getId()
{
    return this->id;
}

void Processo::setId(int id)
{
    this->id = id;
}

string Processo::getDescricao()
{
    return this->descricao;
}

void Processo::setDescricao(string descricao)
{
    this->descricao = descricao;
}

string Processo::getDataEntrada()
{
    return this->dataEntrada;
}

void Processo::setDataEntrada(string dataEntrada)
{
    this->dataEntrada = dataEntrada;
}

string Processo::getHoraEntrada()
{
    return this->horaEntrada;
}

void Processo::setHoraEntrada(string horaEntrada)
{
    this->horaEntrada = horaEntrada;
}
