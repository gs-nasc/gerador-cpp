// TipoProcesso.h
using namespace std;


//interface da classe
class TipoProcesso
{
private:
    int id;
    string descricao;

public:
    TipoProcesso();
    TipoProcesso(int, string);

    void ler();
    void imprimir();

//métodos get ou de acesso
    int getId();
    string getDescricao();

//métodos set ou de modificação de valores
    void setId(int);
    void setDescricao(string);

};

//Corpo dos métodos
TipoProcesso::TipoProcesso()
{
    this->id = 0;
    this->descricao = "";
}

TipoProcesso::TipoProcesso(int id, string descricao)
{
    this->id = id;
    this->descricao = descricao;
}

void TipoProcesso::ler()
{
    cout<<"\nLer dados de Tipo Processo\n";
    cout<<"Informe o Id:";
    getline(cin, id);
    fflush(stdin);
    cout<<"Informe o Descricao:";
    getline(cin, descricao);
    fflush(stdin);
}

void TipoProcesso::imprimir()
{
    cout<<"\nImprimir dados de Tipo Processo\n";
    cout<<"Id:" << id << endl;
    cout<<"Descricao:" << descricao << endl;
}

int TipoProcesso::getId()
{
    return this->id;
}

void TipoProcesso::setId(int id)
{
    this->id = id;
}

string TipoProcesso::getDescricao()
{
    return this->descricao;
}

void TipoProcesso::setDescricao(string descricao)
{
    this->descricao = descricao;
}
