// Vara.h
using namespace std;


//interface da classe
class Vara
{
private:
    int id;
    int processo;
    int advogado;
    string juiz;
    float valorCausa;

public:
    Vara();
    Vara(int, int, int, string, float);

    void ler();
    void imprimir();

//métodos get ou de acesso
    int getId();
    int getProcesso();
    int getAdvogado();
    string getJuiz();
    float getValorCausa();

//métodos set ou de modificação de valores
    void setId(int);
    void setProcesso(int);
    void setAdvogado(int);
    void setJuiz(string);
    void setValorCausa(float);

};

//Corpo dos métodos
Vara::Vara()
{
    this->id = 0;
    this->processo = 0;
    this->advogado = 0;
    this->juiz = "";
    this->valorCausa = 0;
}

Vara::Vara(int id, int processo, int advogado, string juiz, float valorCausa)
{
    this->id = id;
    this->processo = processo;
    this->advogado = advogado;
    this->juiz = juiz;
    this->valorCausa = valorCausa;
}

void Vara::ler()
{
    cout<<"\nLer dados de Vara\n";
    cout<<"Informe o Id:";
    getline(cin, id);
    fflush(stdin);
    cout<<"Informe o Processo:";
    getline(cin, processo);
    fflush(stdin);
    cout<<"Informe o Advogado:";
    getline(cin, advogado);
    fflush(stdin);
    cout<<"Informe o Juiz:";
    getline(cin, juiz);
    fflush(stdin);
    cout<<"Informe o ValorCausa:";
    getline(cin, valorCausa);
    fflush(stdin);
}

void Vara::imprimir()
{
    cout<<"\nImprimir dados de Vara\n";
    cout<<"Id:" << id << endl;
    cout<<"Processo:" << processo << endl;
    cout<<"Advogado:" << advogado << endl;
    cout<<"Juiz:" << juiz << endl;
    cout<<"ValorCausa:" << valorCausa << endl;
}

int Vara::getId()
{
    return this->id;
}

void Vara::setId(int id)
{
    this->id = id;
}

int Vara::getProcesso()
{
    return this->processo;
}

void Vara::setProcesso(int processo)
{
    this->processo = processo;
}

int Vara::getAdvogado()
{
    return this->advogado;
}

void Vara::setAdvogado(int advogado)
{
    this->advogado = advogado;
}

string Vara::getJuiz()
{
    return this->juiz;
}

void Vara::setJuiz(string juiz)
{
    this->juiz = juiz;
}

float Vara::getValorCausa()
{
    return this->valorCausa;
}

void Vara::setValorCausa(float valorCausa)
{
    this->valorCausa = valorCausa;
}
