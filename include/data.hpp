#ifndef FORMATO_H_INCLUDED
#define FORMATO_H_INCLUDED
#include <string>
#include <string.h>
#include <vector>
#include "ExecaoCustomizada.h"

using namespace std;

class Formato
{
private:
    string nome;        //PT-BR ou EN-US
    string separadorData;     //Separador utilizado entre os valores de ano, mes e dia
    string separadorHorario;      //Separador utilizado entre os valores de hora, min e seg

public:
    Formato();      //Construtor default
    Formato(string valNome);     //Construtor com parametro de nome
    virtual ~Formato();     //Destrutor
    string getNome();
    string getSeparadorData();
    string getSeparadorHorario();
};

#endif // FORMATO_H_INCLUDED


#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <cstddef>
#include "Formato.h"
#include "ExecaoCustomizada.h"

using namespace std;

Formato::Formato()
{
    nome= "PT-BR";
    separadorData= '/';
    separadorHorario= ':';
}

Formato::Formato(string valNome)
{
    nome= valNome;
    if (strcmp(valNome.c_str(),"PT-BR")==0)
        separadorData= '/';
    else if (strcmp(valNome.c_str(),"EN-US")==0)
        separadorData= '-';
    separadorHorario= ':';
}

Formato::~Formato(){}

string Formato::getNome()
{
    return nome;
}

string Formato::getSeparadorData()
{
    return separadorData;
}

string Formato::getSeparadorHorario()
{
    return separadorHorario;
}


#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <string>
#include "formato.h"
#include "ExecaoCustomizada.h"

//Constantes de Conversao
#define YEAR_TO_SECONDS 31536000
#define DAY_TO_SECONDS 86400
#define HOURS_TO_SECONDS 3600
#define MINUTE_TO_SECONDS 60

using namespace std;

class Data
{
private:
    int ano;
    int mes;
    int dia;
    int hora;
    int minuto;
    int segundo;
    long ticks;     //Segundos desde 00:00:00 01/01/1970
    Formato formatoData;

    void ticksToDate();
    void dateToTicks();

public:
    Data();     //Construtor default(PT-BR)
    Data(Formato valFormato);       //Construtor default de formato de data especifico
    Data(int valAno, int valMes, int valDia, int valHora, int valMin, int valSeg);      //Construtor com argumentos e formato default
    Data(long valTicks);        //Construtor a partir de ticks
    virtual ~Data();        //Destrutor
    bool operator==(Data &d2);       //Sobrecarga do operador de comparacao eq
    bool operator<(Data &d2);        //Sobrecarga do operador de comparacao lt
    bool operator>(Data &d2);        //Sobrecarga do operator de comparacao gt
    Data operator-(Data &d2);         //Sobrecarga do operador de subtracao

    //Metodos get:
    int getAno();
    int getMes();
    int getDia();
    int getHora();
    int getMin();
    int getSeg();
    long getTicks();
    string getFormato();

    //Metodos set:
    void setAno(int valAno);
    void setMes(int valMes);
    void setDia(int valDia);
    void setHora(int valHora);
    void setMin(int valMin);
    void setSeg(int valSeg);
    void setTicks(long valTicks);
    void setFormato(Formato valFormato);

    bool validaData();      //Verifica se todos os valores dos atributos estao dentro dos limites possiveis
    Data dateNow();     //Retorna a data do presente momento
    void printData();       //Imprime a data na tela de acordo com o formato ja atribuido
    string getData();       //Retorna a data no formato de string
    int diffData(Data);    // Retorna a diferença entre duas datas em dias
};

#endif // DATA_H_INCLUDED


#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <cstddef>
#include <time.h>
#include "data.h"
#include "ExecaoCustomizada.h"

using namespace std;

//Metodos Privados:

int bissexto(int year){
    return year % 4 == 0 && (year % 400 == 0 || year % 100 != 0) ? 1 : 0;
}

int monthToDays(int month){
    return month == 2 ? 28 :
           month <= 7 ? 30 + (month % 2) :
           month > 7 ? 31 - (month % 2) : 31;
}

void Data::ticksToDate() {
    //Inicializa as datas
    this->ano = 1970;
    this->mes = 0;
    this->dia = 1;
    this->hora = 0;
    this->minuto = 0;
    this->segundo = 0;
    long availableTicks = this->ticks;
    bool stopYears = false;

    while(availableTicks >= YEAR_TO_SECONDS && !stopYears){
        availableTicks -= (YEAR_TO_SECONDS + (bissexto(this->ano) * DAY_TO_SECONDS));
        this->ano++;
        if(bissexto(this->ano) == 1){
            if(availableTicks <  (YEAR_TO_SECONDS+DAY_TO_SECONDS)){
                stopYears = true;
            }
        }
    }
  this->mes += 1;
    while(availableTicks > 0) {
        long duracaoMes = monthToDays(this->mes) * DAY_TO_SECONDS;
        if (availableTicks >= duracaoMes){
            availableTicks -= duracaoMes;
            this->mes++;
        }else if(availableTicks >= DAY_TO_SECONDS){
            this->dia += (int) availableTicks/DAY_TO_SECONDS;
            availableTicks-= (this->dia-1) * DAY_TO_SECONDS;
        }else if(availableTicks >= HOURS_TO_SECONDS){
            this->hora += (int) availableTicks/HOURS_TO_SECONDS;
            availableTicks-= this->hora * HOURS_TO_SECONDS;
        }else if(availableTicks >= MINUTE_TO_SECONDS){
            this->minuto += (int) availableTicks/MINUTE_TO_SECONDS;
            availableTicks-= this->minuto * MINUTE_TO_SECONDS;
        }else{
            this->segundo = availableTicks;
          availableTicks = 0;
        }
    }



}
void Data::dateToTicks() {
    this->ticks = 0;
    for (int currentYear = 1970; currentYear < this->ano; currentYear++) {
        this->ticks += YEAR_TO_SECONDS;
        if(bissexto(currentYear) == 1){
            this->ticks += DAY_TO_SECONDS;
        }
    }

    for (int currentMonth = 0; currentMonth < (this->mes-1);currentMonth++){
        this->ticks += (monthToDays(currentMonth) * DAY_TO_SECONDS);
        if(currentMonth == 2 && bissexto(this->ano) == 1 && this->mes > 2){
            this->ticks += DAY_TO_SECONDS;
        }
    }
    this->ticks += (this->dia-1) * DAY_TO_SECONDS;
    this->ticks += this->hora * HOURS_TO_SECONDS;
    this->ticks += this->minuto * MINUTE_TO_SECONDS;
    this->ticks += this->segundo;
}

//Construtores:

Data::Data()
{
    ano= 1970;
    mes= 1;
    dia= 1;
    hora= 0;
    minuto= 0;
    segundo= 0;
    dateToTicks();
    validaData();
}

Data::Data(Formato valFormato)
{
    ano= 1970;
    mes= 1;
    dia= 1;
    hora= 0;
    minuto= 0;
    segundo= 0;
    formatoData= valFormato;
    dateToTicks();
    validaData();
}

Data::Data(int valAno, int valMes, int valDia, int valHora, int valMin, int valSeg)
{
    ano= valAno;
    mes= valMes;
    dia= valDia;
    hora= valHora;
    minuto= valMin;
    segundo= valSeg;
    dateToTicks();
    validaData();
}

Data::Data(long valTicks)
{
    ticks= valTicks;
    ticksToDate();
    validaData();
}

//Destrutor:
Data::~Data(){}

//Operadores:

bool Data::operator==(Data &d2)
{
	return ((ano == d2.ano)&&(mes == d2.mes)&&(dia == d2.dia)&&(hora == d2.hora)&&
           (minuto == d2.minuto)&&(segundo == d2.segundo)||(ticks == d2.ticks));
}

bool Data::operator<(Data &d2)
{
	return ((ano<d2.ano)||(ano==d2.ano && mes<d2.mes)||(ano==d2.ano && mes==d2.mes && dia<d2.dia)||
           (ano==d2.ano && mes==d2.mes && dia==d2.dia && hora<d2.hora)||(ano==d2.ano && mes==d2.mes&&
           dia==d2.dia && hora==d2.hora && minuto<d2.minuto)||(ano==d2.ano && mes==d2.mes && dia==d2.dia &&
           hora==d2.hora && minuto==d2.minuto && segundo<d2.segundo));
}

bool Data::operator>(Data &d2)
{
    return !((ano<d2.ano)||(ano==d2.ano && mes<d2.mes)||(ano==d2.ano && mes==d2.mes && dia<d2.dia)||
	       (ano==d2.ano && mes==d2.mes && dia==d2.dia && hora<d2.hora)||(ano==d2.ano && mes==d2.mes&&
           dia==d2.dia && hora==d2.hora && minuto<d2.minuto)||(ano==d2.ano && mes==d2.mes && dia==d2.dia &&
           hora==d2.hora && minuto==d2.minuto && segundo<d2.segundo));
}

Data Data::operator-(Data &d2)
{
    Data aux(ticks-d2.getTicks());
    if (ticks<d2.getTicks())        //Tratamento de excecao se for tentada uma subtracao impossivel
        throw ExecaoCustomizada("Erro: Resultado eh data negativa, inverta parametros");
    else
        return aux;
}

//Metodos get:

int Data::getAno()
{
    return ano;
}

int Data::getMes()
{
    return mes;
}

int Data::getDia()
{
    return dia;
}

int Data::getHora()
{
    return hora;
}

int Data::getMin()
{
    return minuto;
}

int Data::getSeg()
{
    return segundo;
}

long Data::getTicks()
{
    return ticks;
}

string Data::getFormato()
{
    return formatoData.getNome();
}

//Metodos set:

void Data::setAno(int valAno)
{
    ano= valAno;
    dateToTicks();
    validaData();
}

void Data::setMes(int valMes)
{
    mes= valMes;
    dateToTicks();
    validaData();
}

void Data::setDia(int valDia)
{
    dia= valDia;
    dateToTicks();
    validaData();
}

void Data::setHora(int valHora)
{
    hora= valHora;
    dateToTicks();
    validaData();
}

void Data::setMin(int valMin)
{
    minuto= valMin;
    dateToTicks();
    validaData();
}

void Data::setSeg(int valSeg)
{
    segundo= valSeg;
    dateToTicks();
    validaData();
}

void Data::setTicks(long valTicks)
{
    ticks= valTicks;
    ticksToDate();
    validaData();
}

void Data::setFormato(Formato valFormato)
{
    formatoData= valFormato;
}

//Outros metodos:

bool Data::validaData()
{
    int condicao= 1;
    if ((segundo<0)||(minuto<0)||(hora<0)||(dia<0)||(mes<0)||(ano<1970))
        condicao= 0;
    else if ((segundo>59)||(minuto>59)||(hora>23)||(mes>12))
        condicao= 0;
    else if ((dia>31)&&((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)))
        condicao= 0;
    else if ((dia>30)&&((mes==4)||(mes==6)||(mes==9)||(mes==11)))
        condicao= 0;
    if ((ano%400==0)||((ano%4==0)&&(ano%100!=0)))
    {
        if ((mes==2)&&(dia>29))
            condicao= 0;
    }
    else
    {
        if ((mes==2)&&(dia>28))
            condicao= 0;
    }
    return (condicao==1);
}

Data Data::dateNow()
{
    time_t tempo= time(NULL);
    double a= double(tempo);
    Data aux(tempo);
    return aux;
}

void Data::printData()
{
    if (strcmp(formatoData.getNome().c_str(),"PT-BR")==0)
    {
        cout << dia << formatoData.getSeparadorData() << mes << formatoData.getSeparadorData() << ano << "  ";
        cout << hora << formatoData.getSeparadorHorario() << minuto << formatoData.getSeparadorHorario() << segundo << endl;
    }
    else if (strcmp(formatoData.getNome().c_str(),"EN-US")==0)
    {
        cout << ano << formatoData.getSeparadorData() << mes << formatoData.getSeparadorData() << dia << "  ";
        cout << hora << formatoData.getSeparadorHorario() << minuto << formatoData.getSeparadorHorario() << segundo << endl;
    }
    else        //Tratamento de excecao de formato invalido
        throw ExecaoCustomizada("Erro: Esperado argumento PT-BR ou EN-US");
}

string Data::getData() {
  string data = "";
   if (strcmp(formatoData.getNome().c_str(),"PT-BR")==0)
    {
      data = std::to_string(dia) + formatoData.getSeparadorData() + std::to_string(mes) + formatoData.getSeparadorData() + to_string(ano) + " " + to_string(hora)  + formatoData.getSeparadorHorario() + to_string(minuto) + formatoData.getSeparadorHorario() + to_string(segundo);

    }
   else if (strcmp(formatoData.getNome().c_str(),"EN-US")==0)
    {
       data = std::to_string(ano) + formatoData.getSeparadorData() + std::to_string(mes) + formatoData.getSeparadorData() + to_string(dia) + " " + to_string(hora)  + formatoData.getSeparadorHorario() + to_string(minuto) + formatoData.getSeparadorHorario() + to_string(segundo);
    }
    else        //Tratamento de excecao de formato invalido
        throw ExecaoCustomizada("Erro: Esperado argumento PT-BR ou EN-US");
  return data;
}

int Data::diffData(Data d2) {
  int diff = ticks - d2.getTicks();
  return diff / 60 / 60 / 24;
}


#ifndef EXECAOCUSTOMIZADA_H_INCLUDED
#define EXECAOCUSTOMIZADA_H_INCLUDED
#include <exception>
#include <string.h>
#include <fstream>
#include <stdexcept>

using namespace std;

class ExecaoCustomizada : public exception
{
protected:
	char msg[100];

public:
	ExecaoCustomizada(char* e)
	{
		strcpy(msg, e);
	}
	virtual const char* what()
	{
		return msg;
	}
};

#endif // EXECAOCUSTOMIZADA_H_INCLUDED
