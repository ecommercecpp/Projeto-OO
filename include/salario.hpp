#ifndef _SALARIO_HPP_
#define _SALARIO_HPP_

#include "date.h"

class Salario
{
	protected:
		double valor;
		bool status;
		int motivo; // 1 - Promoção 2 - Reajuste (dissidio)
		ec::Date data;
	private:
		void setValor(double valor);
		void setMotivo(int motivo);
	public:
		Salario();
		Salario(double valor, bool status, int motivo);
		double getValor();
		bool getStatus();
		int getMotivo();
		ec::Date getDataAlteracao();
};

#endif