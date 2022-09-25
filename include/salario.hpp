#ifndef _SALARIO_HPP_
#define _SALARIO_HPP_

#include "data.hpp"

class Salario
{
	protected:
		double valor;
		bool status;
		int motivo; // 1 - Promoção 2 - Reajuste (dissidio)
		Data data;
	public:
		Salario();
		Salario(double valor, bool status, int motivo, Data data);
		double getValor();
		void setValor(double valor);
		bool getStatus();
		void setStatus(bool status);
};

#endif