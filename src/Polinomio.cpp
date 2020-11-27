/*
 * Polinomio.cpp
 *
 *  Created on: 27 nov. 2020
 *      Author: joseluis
 */

#include "Polinomio.h"
#include <cmath>

namespace practica4 {

Polinomio::Polinomio() {
	// TODO Auto-generated constructor stub

}

Polinomio::~Polinomio() {
	// TODO Auto-generated destructor stub
}

/*
 *  Constructor de copia
 */
Polinomio::Polinomio(const Polinomio &other) {
	this->orden = p.orden;
	this->vcoef(other);
	return;
}

/*
 * Constructor a partir de un arreglo de coeficientes
 */
Polinomio::Polinomio(int n, double v[]) {
	this->orden = n;
	this->vcoef(v);
}

int Polinomio::getOrden() const {
	return this->orden;
}

double Polinomio::getCoef(int p) const {
	return this->vcoef[p];
}

//TODO revisar...
double* Polinomio::calcular(int limite) {
	double *p=new double[limite+1];
	double suma;

	for(int i=0;i<=limite;i++){
		suma=0;
		for(int j=0;j<=orden;j++)
			suma+=pow((double)i,j)*this->vcoef[j];

		p[i]=suma;
	}
	return p;
}

	/*
	 * Polinomio::evaluar(x) calcula el valor de y para x
	 */
double Polinomio::evaluar(double x) const {
	double res = 0;
	int lim = this->orden + 1;
	for(int i = 0; i < lim; i++)
		res += pow(x, i) * this->vcoef[i];

	return res;
}

	/*
	 * operator=()  asignacion
	 */
Polinomio& Polinomio::operator=(const Polinomio &p) {
	if(this == &p) return *this;

	delete this->vcoef;

	this->vcoef(p.vcoef);
	this->orden = p.orden;
	return *this;

}

Polinomio Polinomio::operator+ (const Polinomio& p) const {
	int sum_ord = this->orden > p.orden ? this->orden : p.orden;
	int ordenMin = this->orden < p.orden ? this->orden : p.orden;

	double * sum_coef = new double [sum_ord + 1];
	for (int i = 0; i < ordenMin + 1; i++) sum_coef[i] = this->vcoef[i] + p.vcoef[i];
		for (int i = ordenMin + 1; i < sum_ord + 1; i++)
			sum_coef[i] = this->orden > p.orden ? this->vcoef[i] : p.vcoef[i];

	int i = sum_ord;

	while(abs(sum_coef[i--]) < 1e-5) sum_ord--;

	return Polinomio(sum_ord, sum_coef);
}

Polinomio& Polinomio::operator+= (const Polinomio &p) {
	return *this += p;
}

bool Polinomio::operator< (const Polinomio &p) const {
	return this->evaluar(0.0) < p.evaluar(0.0);
}

bool Polinomio::operator==(const Polinomio &p) {
	// chequear orden
	if( this->orden != p.orden )
		return false;

	// chequear coeficientes
	int lim = this->orden + 1;
	for( int i=0; i < lim; i++)
		if( this->vcoef[i] != p.vcoef[i])
			return false;

	return true;
}

ostream& Polinomio::operator<<(ostream &o) {
	for( auto c : this->vcoef)
		o << c << " ";
	return o;
}

Polinomio Polinomio::operator -(const Polinomio &p) {
	int maxOrden = max(this->orden, p.orden);
	int minOrden = min( this->orden, p.orden);

	vector<double> result;
	for( int i = 0; i <= minOrden; i++)
		result[i] = this->vcoef[i] - p.vcoef[i];
	if( this->orden > p.orden )
		resu

}

} /* namespace practica4 */
