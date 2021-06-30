#include <iostream>
using namespace std;

class Estacionamento{
    private: 
        string numeroDaPlaca;
        string marca;
        int horaEntrada, horaSaida, minutoEntrada, minutoSaida;
        float aux;
    
    public:
        Estacionamento(){}
        Estacionamento(string marca, string numeroDaPLaca, int horaEntrada, int horaSaida, int minutoEntrada, int minutoSaida){
            this->marca = marca;
            this->numeroDaPlaca = numeroDaPLaca;
            this->horaEntrada = horaEntrada;
            this->horaSaida = horaSaida;
            this->minutoEntrada = minutoEntrada;
            this->minutoSaida = minutoSaida;
            this->aux = ((this->horaSaida - this->horaEntrada)*8)+((this->minutoSaida - this->minutoEntrada)/8);;
        }

        void imprimir(){
            cout << "\nMarca do carro: "<< this->marca;
            cout << "\nNumero da placa: " << this->numeroDaPlaca;
            cout << "\nhora de entrada: "<<horaEntrada<<":"<<minutoEntrada<<"."<<endl;
            cout << "\nhora de saida: "<<horaSaida<<":"<<minutoSaida<<"."<<endl;
            cout << "\nvalor pago: "<< this->aux <<"R$"<<endl;
        }

};

int main(){

    Estacionamento *e1;
    string modelo;
    string placa;
    int horaIn, horaOut, minIn, minOut;

    system("cls || clear");
    cout <<"informe o modelo do carro: "<< endl;
    getline(cin, modelo);
    cout <<"informe a placa do carro: "<<endl;
    getline(cin, placa);
    cout<<"\ninforme somente a hora que entrou no estacionamento: "<< endl;
    cin >> horaIn; cin.ignore();
    while (horaIn>=24 && horaOut < 0){
        cout <<"\nhora invalida, digite um horario entre 00:XX e 23:XX"<<endl;
        cin >> horaIn; cin.ignore();
    }
    cout<<"\ninforme somente os minutos que entrou no estacionamento: "<< endl;
    cin >> minIn; cin.ignore();
    while (minIn>60 && minOut < 0){
        cout <<"minuto invalido, digite um minuto entre XX:00 e 23:60"<<endl;
        cin >> minIn; cin.ignore();
    }
    cout<<"\ninforme somente a hora que saiu no estacionamento: "<< endl;
    cin >> horaOut; cin.ignore();
    while (horaIn>=24 && horaOut < 0){
        cout <<"\nhora invalida, digite um horario entre 00:XX e 23:XX"<<endl;
        cin >> horaOut; cin.ignore();
    }
    cout<<"\ninforme somente os minutos que saiu no estacionamento: "<< endl;
    cin >> minOut; cin.ignore();
    while (minIn>60 && minOut < 0){
        cout <<"\nminuto invalido, digite um minuto entre XX:00 e 23:60"<<endl;
        cin >> minOut; cin.ignore();
    }

    e1 = new Estacionamento(modelo, placa, horaIn,horaOut,minIn,minOut);

    system("pause");

    system("cls || clear");
    e1->imprimir();


};