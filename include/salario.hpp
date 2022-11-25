#ifndef _SALARIO_HPP_
#define _SALARIO_HPP_

#include <string>
#include "Data.h"

class Salario
{
	protected:
		double valor;
		bool status;
		int motivo; // 1 - Promoção 2 - Reajuste (dissidio)
		Data data;
	private:
		void setValor(double valor);
		void setMotivo(int motivo);
	public:
		Salario();
		Salario(double valor, bool status, int motivo);
		double getValor();
		bool getStatus();
		int getMotivo();
		Data getDataAlteracao();
};

#endif