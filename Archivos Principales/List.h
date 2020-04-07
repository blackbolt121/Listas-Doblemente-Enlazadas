#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;
template <class T>
class List {
private:
	Nodo<T>* head;
	Nodo<T>* tail;
	int getIndex(const T& dato);
	int n = 0;

public:
	Nodo<T>* getByIndex(const int& n);
	Nodo <T>* getHead();
	Nodo <T>* getTail();
	void insert(const T& dato);
	void insertHead(const T& dato);
	void insertTail(const T& dato);
	void insertByIndex(const T& dato, const int& index);
	void pop(const int &indice, bool x = true);
	int size();
	int find(const T& dato);
	void show(bool x = true);
};
template <class T>
Nodo <T>* List<T>::getHead() {
	return this->head;
}
template <class T>
Nodo <T>* List<T>::getTail() {
	return this->tail;
}
template <class T>
void List<T>::show(bool x) {
	Nodo<T>* aux;
	if (this->head != NULL and this->tail != NULL) {
		if (x == true)
		{
			aux = this->head;
			while (aux != NULL) {
				cout << aux->getDato() << endl;
				aux = aux->getNext();
			}
		}
		else
		{
			aux = this->tail;
			while (aux != nullptr) {
				cout << aux->getDato() << endl;
				aux = aux->getLast();
			}
		}
	}
}
template <class T>
void List<T>::insert(const T& dato) {
	Nodo<T>* aux = new Nodo<T>(dato);
	if (this->head == nullptr and this->tail == nullptr) {
		this->head = aux;
		this->tail = aux;
		this->n++;
	}
	else {
		this->tail->setNext(aux);
		aux->setLast(this->tail);
		this->tail = aux;
		this->n++;
	}
}
template <class T>
int List<T>::getIndex(const T& dato) {
	try {
		Nodo<T>* aux = this->head;
		int contador = 1;
		while (aux != nullptr) {
			if (aux->getDato() == dato) {
				return contador;
			}
			else
				contador++;
			aux = aux->getNext();
		}
		throw - 1;
	}
	catch (const int& except) {
		cerr << "Elemento no encontrado...";
		return -9999;
	}
}
template<class T>
Nodo<T>* List<T>::getByIndex(const int& index) {
	try {
		if (index < this->n and 0 <= index) {
			Nodo<T>* aux = this->head;
			for (int i = 0; i < index; i++) {
				aux = aux->getNext();
			}
			return aux;
		}
		else {
			throw - 1;
		}
	}
	catch (const int& error) {
		cerr << "Error fatal";
		exit(1);
	}

}
template <class T>
int List<T>::find(const T& dato) {
	try {
		return this->getIndex(dato);
	}
	catch (const int& except) {
		cout << "Elemento no existente en la lista con codigo: ";
		return -9999;
	}
}
template <class T>
void List<T>::insertHead(const T& dato) {
	if (this->head == NULL) {
		this->insert(dato);
	}
	else {
		Nodo<T>* aux = new Nodo<T>(dato);
		aux->setNext(this->head);
		this->head->setLast(aux);
		this->head = aux;
	}
};
template <class T>
void List<T>::insertTail(const T& dato) {
	if (this->tail == NULL) {
		this->insert(dato);
	}
	else {
		Nodo<T>* aux = new Nodo<T>(dato);
		aux->setLast(this->tail);
		this->tail->setNext(aux);
		this->tail = aux;
	}

};
template <class T>
void List<T>::insertByIndex(const T& dato, const int &index) {
	try {
		if (index < n and 0 <= index) {
			Nodo<T>* aux = new Nodo(dato);
			Nodo<T>* obj = this->getByIndex(index);
			obj->getLast()->setNext(aux); //El elemento anterior al nodo configuramos su siguiente para que apunte al nuevo nodo
			aux->setLast(obj->getLast()); //El elemento anterior del nuevo nodo es el elemento anterior del nodo que ocupa el indice dado de la función
			aux->setNext(obj); //El elemento que le sigue al nuevo nodo es el nodo que ocupa el indice dado de la funcion
			obj->setLast(aux); //El objeto que ocupa ese indice su nodo anterior ahora apunta al nuevo nodo
			this->n++;

		}
		else {
			throw - 1;
		}
	}
	catch (const int& except) {
		cerr << "Indice no valido..." << endl;
	}

};
template <class T>
void List<T>::pop(const int &indice, bool x) {
	if (0 <= indice and indice < this->n) {
		Nodo<T>* aux = this->getByIndex(indice);
		if (aux == this->head) {
			if (this->n > 1) {
				this->head = this->head->getNext();
				this->head->setLast(nullptr);
			}
			else {
				this->head = nullptr;
				this->tail = nullptr;
			}
		}
		else if (aux == this->tail)
		{
			this->tail = this->tail->getLast();
			this->tail->setNext(nullptr);
		}
		else
		{
			aux->getNext()->setLast(aux->getLast());
			aux->getLast()->setNext(aux->getNext());
		}
		
		this->n--;
	}
};
template <class T>
int List<T>::size() {
	return this->n;
};