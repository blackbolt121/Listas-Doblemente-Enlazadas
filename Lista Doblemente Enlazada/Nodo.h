#pragma once
template <class T>
class Nodo
{
public:
	Nodo<T>(); 
	Nodo<T>(const T &dato);
	void setData(const T &dato);
	void setLast(Nodo<T>* dato);
	void setNext(Nodo<T>* dato);
	T getDato();
	Nodo<T>* getNext();
	Nodo<T>* getLast();
private:
	T data;
	Nodo<T>* last;
	Nodo<T>* next;
};
template <class T>
Nodo<T>::Nodo() {
	this->data = nullptr;
	this->setAnterior = nullptr;
	this->setSiguiente = nullptr;
}
template <class T>
Nodo<T>::Nodo(const T &dato) {

	this->data = dato;
	this->last = nullptr;
	this->next= nullptr;
}

template <class T>
void Nodo<T>::setNext(Nodo<T>* next) {
	this->next = next;
}
template <class T>
void Nodo<T>::setLast(Nodo<T>* last) {
	this->last = last;
}
template <class T>
void Nodo<T>::setData(const T &dato) {
	this->data = dato;
}
template <class T>
T Nodo<T>::getDato() {
	return this->data;
}
template <class T>
Nodo<T>* Nodo<T>::getNext() {
	return this->next;
}
template <class T>
Nodo<T>* Nodo<T>::getLast() {
	return this->last;
}

