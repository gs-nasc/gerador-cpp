// Advogado.h
using namespace std;


//interface da classe
class Advogado
{
private:
    int id;
    string nome;
    string cidade;
    string estado;
    int idade;

public:
    Advogado();
    Advogado(int, string, string, string, int);

    void ler();
    void imprimir();

//métodos get ou de acesso
    int getId();
    string getNome();
    string getCidade();
    string getEstado();
    int getIdade();

//métodos set ou de modificação de valores
    void setId(int);
    void setNome(string);
    void setCidade(string);
    void setEstado(string);
    void setIdade(int);

};

//Corpo dos métodos
Advogado::Advogado()
{
    this->id = 0;
    this->nome = "";
    this->cidade = "";
    this->estado = "";
    this->idade = 0;
}

Advogado::Advogado(int id, string nome, string cidade, string estado, int idade)
{
    this->id = id;
    this->nome = nome;
    this->cidade = cidade;
    this->estado = estado;
    this->idade = idade;
}

void Advogado::ler()
{
    cout<<"\nLer dados de Advogado\n";
    cout<<"Informe o Id:";
    getline(cin, id);
    fflush(stdin);
    cout<<"Informe o Nome:";
    getline(cin, nome);
    fflush(stdin);
    cout<<"Informe o Cidade:";
    getline(cin, cidade);
    fflush(stdin);
    cout<<"Informe o Estado:";
    getline(cin, estado);
    fflush(stdin);
    cout<<"Informe o Idade:";
    getline(cin, idade);
    fflush(stdin);
}

void Advogado::imprimir()
{
    cout<<"\nImprimir dados de Advogado\n";
    cout<<"Id:" << id << endl;
    cout<<"Nome:" << nome << endl;
    cout<<"Cidade:" << cidade << endl;
    cout<<"Estado:" << estado << endl;
    cout<<"Idade:" << idade << endl;
}

int Advogado::getId()
{
    return this->id;
}

void Advogado::setId(int id)
{
    this->id = id;
}

string Advogado::getNome()
{
    return this->nome;
}

void Advogado::setNome(string nome)
{
    this->nome = nome;
}

string Advogado::getCidade()
{
    return this->cidade;
}

void Advogado::setCidade(string cidade)
{
    this->cidade = cidade;
}

string Advogado::getEstado()
{
    return this->estado;
}

void Advogado::setEstado(string estado)
{
    this->estado = estado;
}

int Advogado::getIdade()
{
    return this->idade;
}

void Advogado::setIdade(int idade)
{
    this->idade = idade;
}
