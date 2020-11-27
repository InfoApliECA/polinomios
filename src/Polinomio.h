/*
 * Polinomio.h
 *
 *  Created on: 27 nov. 2020
 *      Author: joseluis
 */

#ifndef POLINOMIO_H_
#define POLINOMIO_H_

#include <iostream>
#include <vector>

using namespace std;

namespace practica4 {

class Polinomio {
public:
	Polinomio();
	virtual ~Polinomio();
	Polinomio(const Polinomio &other);
	Polinomio(int n, double []);

	int getOrden() const;
	double getCoef(int p) const;
	double* calcular(int limite);
	double evaluar(double) const;

	/*
	 * Operadores
	 */

	Polinomio& operator= (const Polinomio& p);
	Polinomio operator+ (const Polinomio&) const;
	Polinomio& operator+= (const Polinomio& p);
	bool operator< (const Polinomio& p) const;
	bool operator== (const Polinomio& p);

	ostream& operator<< (ostream& o);
	Polinomio operator- (const Polinomio& p);

private:
	int orden;
	vector<double> vcoef;
};

} /* namespace practica4 */

#endif /* POLINOMIO_H_ */
